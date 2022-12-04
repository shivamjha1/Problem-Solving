#include <stdio.h>
#include <string.h>

int main() {

    char a[50],b[50];
    int n,i,j,c=0;
    printf("enter string");
    scanf("%s",&a);
    scanf("%s",&b);
    while(a[c] !='\0')
        c++;
    i=0;
    while(b[i] !='\0')
    {
        a[c+i]=b[i];
        i++;
    }
    a[c+i]='\0';
    printf("%s",a);


}


