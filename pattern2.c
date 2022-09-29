#include <stdio.h>

int main(){
	int num,j,i;
	scanf("%d", &num);              	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
	for(i=0;i<num;i++)
    {for(j=0;j<num;j++)
	{if(i==0 || i==num-1)
	    {printf("*");}
    else if(j<num-i-1)
    printf(" ");
    else if(j==num-i-1)
    printf("*");

	    }
    printf("\n");
}
}

