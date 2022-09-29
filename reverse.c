#include<stdio.h>
void main()
{
    int a[10],b[10],s,m,i;
    scanf("%d",&s);
    m=s-1;
    for(i=0;i<s;i++)
        {scanf("%d",&a[i]);
        b[m]=a[i];
        m--;}
    for(i=0;i<s;i++)
        {printf("%d ",b[i]);}
}
