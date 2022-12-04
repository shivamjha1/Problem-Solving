#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,m;
    scanf("%d%d",&a,&b);
    c=pow(a,b)+1;
    scanf("%d",&d);
    while(d>0)
    {
        m=c%10;
        c=c/10;
        d--;
    }
    printf("%d",m);


    
}