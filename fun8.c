#include<stdio.h>
int gcd(int a,int b);
void main()
{
    int a,b;
    printf("enter two nums-");
    scanf("%d%d",&a,&b);
    printf("hcf is %d",gcd(a,b));
}
int gcd(int a,int b)
{ int i;
    if(a>b)

    {
        for(i=b;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
                break;

        }
    }
    else

    {
        for(i=a;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
                break;

        }
    }
    return i;

}
