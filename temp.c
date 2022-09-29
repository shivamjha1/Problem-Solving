
#include<stdio.h>
void main()
{
    int temp;
    scanf("%d",&temp);
    if(temp<0 )
        printf("freezing");
    else if( temp>=0 && temp<10)
        printf("very cold");
    else if( temp>=10 && temp<20)
        printf("cold");
    else if( temp>=20 && temp<30)
        printf("normal");
        else if( temp>=30 && temp<40)
        printf("hot");
    else if( temp>=40)
        printf("very hot");

}
