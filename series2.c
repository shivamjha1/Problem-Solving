#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n * fact(n-1);
}
void main()
{
    int l,a,i,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+(fact(i)/i);
    }
    printf("%d",s);
}
