#include<stdio.h>
void merge_array(int a[], int n, int b[], int m)
{
    int c[15],i,j,k;
    while(i<n && j<m)
    { if(a[i]>b[j])
    {

        c[k]=b[j];
        j++;
        k++;
    }
    else
    {
        c[k]=a[i];
        i++;
        k++;
    }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(i=0; i<k; i++)
    {
        printf("%d",c[i]);
    }
}
void main()
{
    int a[5]={1,2,3,4,5};
    int b[7]={6,7,8,9,10,11,12};
    merge_array(a,5,b,7);
}
