#include<stdio.h>
void main()
{
    int a[20],n,c=1,i,j;
    scanf("%d",&n);
    int d=n;
    for(i=0;i<n/2;i++)
        {a[i]=c;
        c+=2;}
    if(n/2==0){
    for(i=n/2+1;i<=2*n;i++)
    {
        a[i]=d;
        d-=2;
    }
}
else
{
    for(i=n/2;i<=2*n;i++)
    {
        a[i]=d;
        d-=2;
    }
}

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
