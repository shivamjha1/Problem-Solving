#include<stdio.h>
int count(char stri[])
{
    int i=0;
    while(stri[i] !='\0')
        i++;
    return i;
}

void main()
{
    char stri[40];
    gets(stri);
    printf("%d", count(stri));
}
