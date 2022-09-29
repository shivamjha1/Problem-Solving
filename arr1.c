#include<stdio.h>
void main()
{
    int t,j,i,a[]={5,8,2,1,9,3};
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("%d ",a[0]);

}
