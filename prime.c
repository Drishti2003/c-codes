#include <stdio.h>
#include <stdbool.h>
int main()
{	int i=2,x;
	printf("Enter a number\n");
	scanf("%d",&x);
	bool isPrime = true;
	while(i<=x/2)
	{	if(x%i==0)
		{	isPrime=false;
			break;
		}	
		i++;
	}	
	isPrime?printf("Number is Prime"):printf("Number is not Prime");	
}