#include<stdio.h>
int prime(int i)
{
    int j;
    for(j=3;j<=i;j++)
    if(i%j==0)
    {
        break;
    }
    printf("%d ",j);

}
void main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        printf("%d ",1);
        else if(i%2==0)
            printf("%d ",2);
        else
            prime(i);
    }
}