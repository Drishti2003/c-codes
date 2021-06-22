#include <stdio.h>
union Item
{
	int x; float y; char z;
};
void main()
{
	union Item i1;
	i1.x=5;
	printf("%d\n",i1.x);
	i1.y=3.5;
	printf("%f\n",i1.y);
	i1.z='d';
	printf("%c\n",i1.z);
}