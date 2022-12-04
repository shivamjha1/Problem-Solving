#include<stdio.h>
int fibb(int n);
void main()
{
    int i,n;
    printf("enter the integer-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",fibb(i));
}
int fibb(int n)
{
    if(n==1||n==2)
        return (n-1);
    else
        return fibb(n-1)+fibb(n-2);
}
