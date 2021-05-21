// takes nothing returns noting
#include <stdio.h>
int main()
{
	void add(void);
	add();
}
void add()
{
	int a,b,c;
	printf("Enter two Number\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d\n",c);
}