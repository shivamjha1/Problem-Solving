#include <stdio.h>

int main(void) {
    int c=0,m=0;
    char s[20];
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
        else
        m++;
    }
    if(c>m)
    printf("WIN");
    else
    printf("LOSE");
	return 0;
}
