#include<stdio.h>
void main()
{
    int i,j,k,l,n;
    printf("enter limit");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
            k=0;
            while(k<n-i)
               {
                   if(k==0)
                   printf("  ");
                   else
                    printf("    ");
                k++;}
        for(l=i;l>=1;l--)
        {
            if(l==n)
            continue;
            else printf("%d ",l);
            }
        printf("\n");
        }

}

