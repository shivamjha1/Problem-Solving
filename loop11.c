#include<stdio.h>

void main()
{

    int i,j,k,l,m;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
            {printf("%d",j);}
                k=m;
        while(k> i)
        {
            printf("  ");
            k=k-1;
        }
        for(l=i;l>=1;l--)
            {printf("%d",l);}
                printf("\n");
    }

}
