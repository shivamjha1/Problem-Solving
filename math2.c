#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,m,r;
    scanf("%d",&a);
    r=a;
    while(r/10!=0)
    {
        a=r;
        r=0;
        while(a>0)
        {
            m=a%10;
            r=r+m;
            a=a/10;
        }
    }
    printf("%d",r);
}