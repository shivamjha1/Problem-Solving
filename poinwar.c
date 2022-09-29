#include<stdio.h>
void main()
{
    int *p,a[5],i,el;
    p=&a[0];
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("enter-");
    scanf("%d",&el);
    for(i=0;i<5;i++)
    {
        if(el==*(p+i))
        break;}
    printf("%d th position",i+1);
}
