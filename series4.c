#include<stdio.h>
#include<math.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n * fact(n-1);
}
void main()
{
    int l,a,i,s=0,x;
    scanf("%d",&a);
    scanf("%d",&x);
    int c=1;
    for(i=1;i<=a;i+=2)
    {
    {

        s=s+(pow(-1,c)*x*fact(i)/i);
        c++;
    }
    }
    printf("%d",s);
}
