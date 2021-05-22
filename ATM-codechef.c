#include <stdio.h>
int main()
{	int x;
	float a,b;
	scanf("%d %f",&x,&a);
	if(x<a)
	{ if(x%5==0)
	{ b=a-x-.50;
		printf("%.2f\n",b);
	}
	else
	{ 
		printf("%.2f\n",a);
	}
	}
	else 
	{ printf("%.2f\n",a);	
	}
}