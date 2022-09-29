#include<stdio.h>
int main(){
    int i,j,k,len,end,n,c;
    scanf("%d",&n);
    end=2*n-2;
    len=2*n-1;
    c=n;
    int a[200][200];
    for(i=0,k=end;i<c-1,k>=c-1;i++,k--)//k=2n-2;i<n-1,k>n-1
        {
        for(j=i;j<=k;j++)
        {
            a[i][j]=n;
            a[k][j]=n;
            a[j][i]=n;
            a[j][k]=n;
        }
        n--;
    }
    //a[c-1][c-1]=1; //n-1
    for(i=0;i<len;i++)//2n-1
    {
        for(j=0;j<len;j++)
            printf("%d ",a[i][j]);
    printf(" \n");
    }
    return 0;
}
