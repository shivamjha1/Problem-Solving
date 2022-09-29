#include<stdio.h>
void main()
{
    int n,m,i;
    printf("n,m=");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n*m;i++)
    {
        if((i%n==0)&&(i%m==0))
            break;
    }
    printf("%d",i);
}
