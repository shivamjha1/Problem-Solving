#include<stdio.h>
int mea(int n1,int n2,int n3,int n4,int n5)
{
    float mean; int median;
    mean=(n1+n2+n3+n4+n5)/5.0;
    printf("%f ",mean);
    median=n3;
    printf("%d",median);
}
void main()
{
    mea(1,2,3,4,11);
}
