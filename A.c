#include <stdio.h>
int main()
{	 int choice,a,b,s;
	printf("\n1. Addition");
	printf("\n2.Odd-Even");
	printf("\n3. Printng N numbers");

	printf("\n\nenter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter two numbers\n");
			scanf("%d%d",&a,&b);
			s=a+b;
			printf("\nSum is %d",s);
			break;
		case 2:
			printf("Enter a number\n");
			scanf("%d",&a);
			if(a%2==0)
		{	printf("Even Number\n");
		}
			else 
		{		printf("Odd Number\n");
		}
			break;
		case 3:
			printf("Enter a number\n");
			scanf("%d",&a);
			for(b=1;b<a;b++)
				printf("%d,\n",b);
			break;
		default:
			printf("Invalid Choice\n");

	}
}
