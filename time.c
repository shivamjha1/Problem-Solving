#include<stdio.h>

struct time
{
    int hr;
    int mint;
    int sec;
};
void main()
{
    struct time t1;
    struct time t2;
    int b,c;
    printf("enter t1");
    scanf("%d%d%d",&t1.hr,&t1.mint,&t1.sec);
    printf("enter t2");
    scanf("%d%d%d",&t2.hr,&t2.mint,&t2.sec);
    b=(t1.sec+t2.sec)/60;
    t2.sec=(t1.sec+t2.sec)%60;
    c=(t1.mint+t2.mint)/60;
    t2.mint=(t1.mint+t2.mint+b)%60;
    t2.hr=(t1.hr+t2.hr+c);
    printf("%d %d %d",t2.hr,t2.mint,t2.sec);




}


