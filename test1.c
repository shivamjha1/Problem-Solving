#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int j,n,c,co,i,ni,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {   c=1;
        ni=0;
        for(j=0;j<n;j++)
        {
            c=c+i+1;
            if(a[i]==c)
                printf("yes");
            { ni=ni+1;
             co=j;}
        }
     if(ni>0)
         printf("Dattebayo %d\n",co);
     else
         printf("Better luck next time\n");



    }

    return 0;
}
