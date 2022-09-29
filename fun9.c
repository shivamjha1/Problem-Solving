#include<stdio.h>
int gcd(int a,int b);
void main()
{
    int a,b;
    printf("enter two nums-");
    scanf("%d%d",&a,&b);
    printf("lcm is %d",gcd(a,b));
}
int gcd(int a,int b)
{ int i;
    if(a>b)

    {
        for(i=b;i<=a*b;i++)
        {
            if(i%a==0 && i%b==0)
                break;

        }
    }
    else

    {
        for(i=a;i<=a*b;i++)
        {
            if(i%a==0 && i%b==0)
                break;

        }
    }
    return i;

}

