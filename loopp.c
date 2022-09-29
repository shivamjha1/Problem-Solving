#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        j=10;
        while(j>2* i)
        {
            printf("8");
            j=j-1;
        }
        printf("\n");
    }
}
