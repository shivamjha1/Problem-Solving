#include<stdio.h>
int strong(int l, int u)
{
    int i,c=0,s,nc,r,fact,j;
    for(i=l;i<=u;i++)
    {
        nc=i;
        s=0;
        while(nc>0)
        {
            fact=1;
            r=nc%10;
            for(j=1;j<=r;j++)
               {
               fact=fact*j;}
               s=s+fact;

            nc=nc/10;
        }
        if(i==s)
        {
            printf("%d ",i);
        }

    }
}
void main()
{
    strong(1,100000);
}
