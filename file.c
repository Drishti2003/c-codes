#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i; 
	FILE *fp;
	char s[100];
	fp=fopen("f1.txt","w");
	if(fp==NULL) {
		printf("File cannot open");
		exit(1);
	}
	printf("Enter a string\n");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	fclose(fp);
}