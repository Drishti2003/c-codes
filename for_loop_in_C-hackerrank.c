#include <stdio.h>
int main()
{	int a,b,i;
    char s[10][10] = {"one","two","three","four","five","six","seven","eight","nine","\0"};
    scanf("%d\n%d", &a, &b);
    for(a>0;a<=b;a++)
    {	if(a<=9)
    	{	i=a-1;
    		printf("%s\n",s[i]);
    	}
    	else if(a%2==0)
    		printf("Even\n");
    	else
    		printf("Odd\n");
    }
}