#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[1000];
    int n,i,j,c=0;
    printf("enter string");
    fgets(a,1000,stdin);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==' ' || a[i]=='\n')
            c++;
    }
    printf("%d",c);

}
