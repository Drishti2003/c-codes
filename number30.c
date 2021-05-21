#include <stdio.h>
int main()	
{
	int x;
	printf("enter a number\n");	
	scanf("%d",&x);
	if(x<30)
	{int y;
	y=30-x;
	printf("add %d to become 30\n",y);  
	}
	else if(x>30)
	{int z;
	z=x-30;
	printf("substrat %d to become 30\n",z);
	}
}