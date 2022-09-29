#include<stdio.h>
int pal(int n)
{
    int s=0,rem,j;
    int c=n;
    while(c>0)
    {
        rem = c%10;
        s=s*10 + rem;
        c=c/10;

    }
    printf("%d ",s);
    if(s==n)
        return 1;
    else
        return 0;
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%d",pal(n));

}
