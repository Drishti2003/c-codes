#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x--)
 { int a,b,c,d;
 	int x,y,z;
 	scanf("%d %d %d %d",&a,&b,&c,&d);
 	x=c/a;
 	y=d/b;
 	z=x+y;
 	printf("%d\n",z);
 }
}