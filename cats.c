#include<stdio.h>
#include<math.h>
int cats(int x,int y, int z)
{
    if(pow(x-z,2)>pow(y-z,2))
       printf("cat B");
    else if(pow(x-z,2)>pow(y-z,2))
        printf("cat A");
    else
    printf("Mouse");
}
void main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    cats(x,y,z);
}
