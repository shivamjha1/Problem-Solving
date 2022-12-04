#include<stdio.h>
void main()
{
    int i,j,m,n;
    char a[10],b[10];
    printf("enter length of 1st and 2nd set-");
    scanf("%d%d",&m,&n);
    printf("enter elements of 1st set");
    scanf("%s",a);
    printf("enter elements of 2nd set");
    scanf("%s",b);
    printf("Cartisian Product=");
     for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("(%c , %c)\n",a[i],b[j]);
            }
        }
}
