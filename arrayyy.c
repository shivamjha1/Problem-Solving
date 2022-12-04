#include<stdio.h>
void main()
{
    int arr[10];
    int i,n,s=0,max;
    printf("no of elements");
    scanf("%d",&n);
    printf("enter elements");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
max=arr[0];
for(i=0;i<n;i++)
   {
       printf("%d\n",arr[i]);
       if(arr[i]> max)
       max=arr[i];
    s=s+arr[i];}
    printf("%d\n",s);
    printf("%d",max);
}


