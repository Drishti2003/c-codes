#include <stdio.h>
int main()
{	int x,y,b=0;
	scanf("%d %d",&x,&y);
	while(x--)
	{	int a;
		scanf("%d",&a);
		if(a%y==0)
		{
			b=b+1;
			
			//b++
			//b+=1
		}	
	}	
	printf("%d",b);
}