#include <stdio.h>
int main()
{	int x,i,j,k;
	printf("Enter number of row\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{	for(j=1;j<=x-i;j++)
		{

			printf(" ");
		}
		for(k=0;k != 2 * i - 1;k++)
		{
			printf("*");
		}
		printf("\n");
	}	
	
}
