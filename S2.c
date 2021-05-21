#include <stdio.h>
int main()
{	int x,i,j;
	printf("Enter a number\n");
	scanf("%d",&x);
	for(i=-1;i<=x;i++)
	{	for(j=0;j<x-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
		}	
			printf("*\n");
	}

}