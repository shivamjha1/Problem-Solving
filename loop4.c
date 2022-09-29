#include<stdio.h>
void main()
{
    int i,j;
     int n=65;
    for(i=1;i<=4;i++)
    { n=64;
        for(j=0;j<i;j++)
        {
            printf("%c",n + i);
            n=n+1;
        }
        printf("\n");
    }
}

