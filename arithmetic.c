#include <stdio.h>
int main()
{// unary operator "++" - increment operator
	int x=2;
	x++; // x++ = x+1 post increment 
	printf("%d\n",x);
	++x; // ++x = x+1 pre increment 
	printf("%d\n",x);

// "--" - decrement operator
	x=7;
	x--; // x-- = post decrement
	printf("%d\n",x);
	--x; // pre decrement 
	printf("%d\n",x);	

// size of()
	int y;
	y=sizeof(int);
	printf("%d\n",y);
	y=sizeof(char);
	printf("%d\n",y);
	y=sizeof(double);
	printf("%d\n",y);
	y=sizeof(float);
	printf("%d\n",y);
}