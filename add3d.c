#include<stdio.h>
void main()
{
    int a[2][3][5]={{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}},{{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}}},j,i,k;
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
        for(k=0;k<5;k++){
        int *p=&a[i][j][k];
        printf("%d\t%d\n",p,*p);}
    }
    }

   /* a[2][2][2]=a + 4*((2*4+2)*6+2);
    int *c=&a[2][2][2];
    printf("%d\n",c);*/
}

