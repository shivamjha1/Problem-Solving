#include<stdio.h>
#include<math.h>
int arms(int l, int u)
{
    int i,c=0,s,nc,r;
    for(i=l;i<=u;i++)
    {
        s=0;
        c=0;
        nc=i;
        while(nc>0)
            {nc=nc/10;
            c++;}
        nc=i;
        while(nc>0)
        {
            r=nc%10;
            s=s+pow(r,c);
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
    arms(10,10000);
}
