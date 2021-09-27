#include<stdio.h>
#define PRODUCT(a,b) a*b
#define SUM(a,b) a+b
#define MULTIPLY(a,b) (a)*(b)
#define ACTION(a,b) a##b+a*b
int main()
{
	printf("Sum of 3 and 4 is %d\n",SUM(3,4));
	printf("Product of 3 and 4 is %d\n",PRODUCT(3,4));
	printf("Product of 3 and 4 is %d\n",PRODUCT(3+2,4-6));
	printf("Product of 3 and 4 is %d\n",MULTIPLY(3+2,4-6));
	printf("%d\n",ACTION(3,4));
}