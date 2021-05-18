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
	else  if(x%5!=0)
	{	int y,z;
		y=5-x%5;
		z=x%5;
		if(y>z)
		{	int r;
			r==y>z;
			printf("substract %d to be divisible by 5\n",z);
		}
		else if(y<z)
		{	int t;
			t==y<z;
			printf("add %d to be divisible by 5\n",y);
		}
	}	
	
}