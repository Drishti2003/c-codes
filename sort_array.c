#include <stdio.h>
void input(int *p)
{
	int a;
	for(a=0;a<=4;a++)
	scanf("%d",p+a);
}
void sort(int *p)
{
	int x,y,z;
	for(x=1;x<4;x++)
	{
		for(y=0;y<=4-x;y++)
			if(*(p+y)>*(p+y+1))
			{	z=*(p+y);
				*(p+y)=*(p+y+1);
				*(p+y+1)=z;

			}
	}
}
void display(int *p)
{
	int i;
	for(i=0;i<=4;i++)
	printf("%d\n",*(p+i));
}
void main()
{
	int a[5];
	input(a);
	sort(a);
	display(a);
}