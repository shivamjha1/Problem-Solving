#include<stdio.h>
void main()
{
    int i,j=0,k=1,c,n;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { j=i;
        while(j<n)
        {
            printf(" ");
            j++;
        }
        for(c=0;c<i;c++)
        {
            printf("*");
        }
        for(k=i-1;k>0;k--)
        {
            printf("*");
        }

        printf("\n");

    }
}
