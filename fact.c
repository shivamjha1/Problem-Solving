#include<stdio.h>
void main()
{

    int i,n,c=1;
    printf("enter n-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        c=c*i;
    printf("%d",c);
}
