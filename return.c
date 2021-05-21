// takes nothing returns something
#include <stdio.h>
int add(void);
void main()
{	int s;
	s=add();
	printf("Sum is %d\n",s);
}
int add()
{	int a,b,c;
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	return(a+b);
}