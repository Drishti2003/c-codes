#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[10];
	FILE *fp;
	fp=fopen("f1.txt","r");
	if(fp==NULL)
	{
		printf("File Not Found");
		exit(1);	
	}	
	while(fgets(str,9,fp)!=NULL)
	{
		printf("%s",str);
	}
	fclose(fp);
}