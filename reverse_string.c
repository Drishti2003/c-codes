#include <stdio.h>
#include <string.h>
int main()
{	 char s[1000],r[1000];
	int end,begin,count=0;
	printf("Enter the string");
	gets(s);
	while(s[count] != \0)
	
	count++;
	
	
	for(begin=0;begin<=count;begin++)
	{
		r[begin]=s[end];
		end--;
	}
	printf("%s",r);
}



