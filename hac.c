#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,n,j,a[100],k,c;
    printf("ent");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {c=0;
    printf("n");
        scanf("%d",&n);
        for(j=0;j<n;j++)

            {printf("el");
                scanf("%d",&a[j]);}
     for(k=0;k<n;k++)
     {if(a[j]%2 !=0)
         c++;
      else if((a[j]+a[j+i+1])%2==0)
          c++;
      a[j+i+1]=0;
     }
     printf("%d",c);
    }
    return 0;
}
