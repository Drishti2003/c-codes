#include <stdio.h>
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	if(x%5==0)
	{
		printf("divisible by 5\n");
	}
	if(x/5!=0)
	{	int y;
		y=x%5;
		printf("%d\n",y);
	}	
}