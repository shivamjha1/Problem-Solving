#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("abc.txt","w");
    while(scanf("%c",&ch)!=EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
}

