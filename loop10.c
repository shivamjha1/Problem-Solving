#include<stdio.h>
void main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
for(i=0;i<3;i++)
   { l=i;
   while(l>0)
    {
        printf(" ");
        l--;
    }
    k=i;
    while(k<=3)
    {
        printf("*");
        k++;
    }
    m=i;
    while(m<3)
    {
        printf("*");
        m++;
    }
        printf("\n");

    }
    for(i=1;i<=3 + 1;i++)
    {j=i;l=i-2;
    while(j<3 +1)
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
}
