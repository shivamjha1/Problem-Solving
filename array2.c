#include<stdio.h>
void main()
{
    int arr[10],b[10];
    int i,n,s=0,f,j,c;
    printf("no of elements");
    scanf("%d",&n);
    printf("enter elements");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
int vis=-1;
for(i=0;i<n;i++)
{ c=1;
for(j=i+1;j<n;j++)
{
    if(arr[i]==arr[j] )
        {c++;
        b[j]=vis;}
    if(b[i] !=vis)
        b[i]=c;
}
}
for(i=0;i<n;i++)
{
    if(b[i] !=vis)
        printf("%d = %d\n",arr[i],b[i]);
}




}
