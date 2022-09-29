#include <stdio.h>
int main()
{
	int i,j,n,k=0,ch,m,choise;
	printf("enter thr size of array 1 and 2  ");
	scanf("%d%d",&n,&m);
    printf("enter the choice");
    scanf("%d",&choise);
	int a[n],b[m],c[100000];
	printf("please enter the first array");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("please enter the second array");
	for(i=0;i<m;i++)
	{
	    scanf("%d",&b[i]);
	}
	switch (choise)
	{
	case 1:
	{
		  for(i=0;i<n;i++)
	          { ch=0;
	            for(j=0;j<m;j++)
	            {
	               if(a[i]==b[j])
	                 {
	                   ch++;
	                 }
	            }
	            if(ch==0)
	            {
	               c[k]=a[i];
	               k++;
	            }
	          }
	       for(i=0;i<k;i++)
	       {
	          printf("%d ",c[i]);
	       }
	       break;
     }

	case 2:
      {
		  for(i=0;i<n;i++)
	          { ch=0;
	            for(j=0;j<m;j++)
	            {
	               if(b[i]==a[j])
	                 {
	                   ch++;
	                 }
	            }
	            if(ch==0)
	            {
	               c[k]=b[i];
	               k++;
	            }
	          }
	       for(i=0;i<k;i++)
	       {
	          printf("%d ",c[i]);
	       }
	       break;
      }

       default:
	  {
		printf("wrong choise");

	  }

    }
}
