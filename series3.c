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
    int l,a,i;
    float x,s=0.0;
    scanf("%d",&a);
    scanf("%f",&x);
    for(i=1;i<=a;i++)
    {
        s=s+ pow(-1,i)*i*x/fact(i);
        printf("%d ",s);
    }
    printf("%d",s);
}

