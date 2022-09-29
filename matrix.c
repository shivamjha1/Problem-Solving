#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,m,n;
    printf("enter m an n");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            b[i][j]=a[j][i];
    }
    printf("\n");
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
    printf("%d ",b[i][j]);
    printf("\n");}


}
