#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[1000];
    int n,i,j,c;
    printf("enter string");
    scanf("%s",&a);
    n=strlen(a);
    for(i=48;i<=57;i++)
    { c=0;
        for(j=0;j<n;j++)
        {
            if(i==a[j])
                {
                    c++;
                }

        }
        printf("%d ",c);
    }
    return 0;
}
