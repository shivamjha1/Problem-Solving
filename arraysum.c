#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,ar[10], arr[10], i;
    scanf("%d", &num);
    for(i = 0; i < num; i++)
        {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<=num;i++)
    {
        ar[i]=arr[num-i-1];
    }
    for(i = 0; i < num; i++)
        printf("%d ", ar[i]);
    return 0;
}
