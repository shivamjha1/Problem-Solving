#include<stdio.h>
void main()
{
    int a[20],n,c=1,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i+=1)
    {
        scanf("%d",&a[i]);}
    for(i=0;i<n;i+=2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(i=0;i<n;i+=1)
    {
        printf("%d ",a[i]);
    }
    }
