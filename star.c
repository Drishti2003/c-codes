#include <stdio.h>
int main()
{	int x,i,j;
	printf("Enter a number\n");
	scanf("%d",&x);
	for(i=-1;i<=10;i++)
	{	for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("*\n");
	}	
}