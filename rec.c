#include<stdio.h>
int rec(int n,int c,int co)
{
    if (n>0 && c==0)
    {printf("%d ",n);


        return rec(n-5,c,co);}
    else if (n<=0 || n<co )
    {
        c+=1;
        printf("%d ",n);
        return rec(n+5,c,co);
    }

}
void main()
{
    int n,c,co,i,j;
    c=0;
    scanf("%d",&n);
    co=n;
    printf("%d ",rec(n,c,co));
}
