#include <stdio.h>
int main()
{
	int x;
	x=2+7;
	printf("%d\n",x);
	/* 3/4     = 0
	   3.0/4   = 0.75
	   3/4.0   = 0.75
	   3.0/4.0 = 0.75
	*/
	x=23%5;
	printf("%d\n",x);

	// relational operatores
	x=5>4>3;
	printf("%d\n",x);
	/* <, >, <=, >=
	   ==, !=
	*/
}