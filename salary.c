#include<stdio.h>
void main()
{
    int basic,da,allow,pf,hra,total;
    char grade;
    printf("enter basic salary and grade-");
    scanf("%d",&basic);
    scanf("%s",&grade);
    if(grade=='A')
    {
        allow=1700;
    }
    else if(grade=='B')
        allow=1500;
    else if(grade=='C')
        allow=1300;
    hra= 0.2*basic;
    da= 0.5*basic;
    pf=0.11*basic;
    total=basic+hra+da+allow-pf;
     printf("%d %d %d %d",hra,da,pf,allow);
    printf("total salary=%d",total);


}
