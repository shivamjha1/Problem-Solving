#include<stdio.h>
#include<math.h>
void main()
{
    int n,a,c=0,i;
    float m,s=0;
    printf("enter n");
    scanf("%d",&n);
    a=n;
    m=n;
    while(a>0)
    {
        c++;
        a=a/10;
    }
    a=n;
    while(n>0)
    {
        i=n%10;
        n=n/10;
        s=s+pow(i,c);
    }
    printf("%f  %f",s,m);

}
