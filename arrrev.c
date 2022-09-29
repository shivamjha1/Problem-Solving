#include<stdio.h>

void main()
{
    int *arr,i,t,n,c;
    scanf("%d",&n);
    c=n;
    arr= (int*) malloc(n * sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<=n/2;i++)
    {
        t=arr[i];
        arr[i]=arr[n-1];
        arr[n-1]=t;
        n--;

    }
    for(i=0;i<c;i++)
        printf("%d",arr[i]);
}
