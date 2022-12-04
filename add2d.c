#include<stdio.h>
void main()
{
    int a[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}},j,i;
    for(i=0;i<3;i++)
    {
    for(j=0;j<5;j++)
    {
        int *p=&a[i][j];
        printf("%d\t%d\n",p,*p);
    }
    }
    a[2][2]=a + 4*(5*(2-0)+ (2-0));
    int *c=&a[2][2];
    printf("%d\n",c);
}
