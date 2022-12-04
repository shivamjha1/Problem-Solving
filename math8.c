#include<stdio.h>
void main()
{
    int r,n,i;
    printf("enter radius and no. of coins:");
    scanf("%d%d",&r,&n);
    float s=0;
    i=0;
    while(n>0)
    {
        n=n-i;
        i++;
    }
    i=i-1;
    if(n==0)
    {
        s=(2*r*i)*(2*i*r)*1.732/4;
        printf("%0.2f",s);
        }
    else
        printf("-1");
}