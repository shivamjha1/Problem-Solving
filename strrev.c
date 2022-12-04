#include<stdio.h>

void main()
{
    char stri[40];
    char st2[40];
    int i=0,c,m;
    gets(stri);
    while(stri[i] !='\0')
        i++;
    c=i;
    m=c;
    for(i=0;i<m;i++)
        {
            st2[i]=stri[c-1];
            c--;
        }
        st2[i]='\0';
        printf("%s",st2);




}
