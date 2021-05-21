#include <stdio.h>
int main()
{	int i,ROW,COL,k=0;
	printf("Enter number of row\n");
	scanf("%d",&ROW);
	for(i=1;i<=ROW;++i)
	{ for(COL=1;COL<=ROW-i;++COL,k=0)
		{
			printf(" ");
		}
	  while(k != 2 * i - 1 )
	  {	printf("*");
	  k++;
	  }
	  printf("\n");
	}


}