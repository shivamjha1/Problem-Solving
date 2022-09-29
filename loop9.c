#include<stdio.h>
void main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1;i<=n/2 + 1;i++)
    {j=i;l=i-2;
    while(j<n/2 +1)
    {
        printf(" ");
        j++;
    }
    for(k=1;k<=i;k++)
    {
        printf("*");
    }
    for(l=i;l>1;l--)
    {printf("*");}
        printf("\n");

    }
    for(i=1;i<=n/2;i++)
   { l=i;
   while(l>0)
    {
        printf(" ");
        l--;
    }
    k=i;
    while(k<=n/2)
    {
        printf("*");
        k++;
    }
    m=i;
    while(m<n/2)
    {
        printf("*");
        m++;
    }
        printf("\n");

    }
}
