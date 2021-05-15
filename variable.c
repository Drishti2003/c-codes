#include <stdio.h>
int main()
{
	long int a=100000000000,b=100000000000;
	printf("%ld\n",a); // %d-format specifier
    printf("a=%ld\n",a);
    printf("value of a is %ld\n",a);
    printf("value of a is %ld and b is %ld\n",a,b);
    printf("Sum of %ld and %ld is %ld",a,b,a+b);
}
/*
%d int 
%f float
%c char
%lf double
*/