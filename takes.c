//  takes something returns nothing
#include <stdio.h>
void main()
{	int x,y;
	void add(int,int);
	printf("Enter two number\n");
	scanf("%d%d",&x,&y);
	add(x,y); // actual arguments 	: call by value
}
void add(int a,int b) // formal arguments
{	int c;
	c=a+b;
	printf("Sum is %d\n",c);
}