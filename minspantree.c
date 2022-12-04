#include<stdio.h>
void main()
{
    int cost[10][10],vis[10]={0},i,j,n,no_e=1,min,a,b,mincost=0;
    printf("Enter number of nodes ");
    scanf("%d",&n);
    printf("Enter cost in form of adjacency matrix\n");
    i=0;
    while(i<=n)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
              cost[i][j]=1000;
        }
        i++;
    }
    
    vis[1]=1; 
    while(no_e<n)
    {
        min=1000;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    if(vis[i]!=0)
                    {
                        min=cost[i][j];
                        a=i;
                        b=j;
                    }
                }
            }
        }
        if(vis[b]==0)
        {
            printf("\n%d to %d  cost=%d",a,b,min);
            mincost=mincost+min;
            no_e++;
        }
        vis[b]=1;
        cost[a][b]=cost[b][a]=1000; 
    }
    printf("\nminimum weight is %d",mincost);
}
