#include<stdio.h>
int prime(int l,int u)
{ int i,c,j;
    for(i=l;i<=u;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            printf("%d ",i);
    }
}
void main()
{
    prime(0,1000);
}
