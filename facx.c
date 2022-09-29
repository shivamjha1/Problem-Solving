#include<stdio.h>
#include<math.h>
void main()
{
    float s=0;
    int x,n,f,i,j,fa=1;
    printf("enter an integer and range-");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=fa;j++)
            f=f*j;
            printf("\n%d",f);
        s+=pow(x,i)/f;
        fa=fa+2;
    }
    printf("\n%f",s);
}
