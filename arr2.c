#include<stdio.h>
void main()
{
    int a[20],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    printf("%d",max);
}
