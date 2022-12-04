#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0,k=n-1;i<n,k>=0;i++,k--)
        for(j=0;j<n;j++)
        b[j][k]=a[i][j];
    for(i=0,k=n-1;i<n,k>=0;i++,k--)
        for(j=0;j<n;j++)
        a[j][k]=b[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }

}
