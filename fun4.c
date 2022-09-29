#include<stdio.h>
int perfect(int n)
{
    int i,c,j;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<i;j++)
            {if(i%j==0)
                 c+=j;}
        if(c==i)
            printf("%d ",i);
    }
}
void main()
{
    perfect(100000);
}
