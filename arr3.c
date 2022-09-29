#include<stdio.h>
void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},i,j,c1=0,c2=0;
    for(i=0,j=5;i<=4,j<=9;i++,j++)
    {
        c1+=a[i];
        c2+=a[j];
    }
    printf("%d",c1*c2);
}
