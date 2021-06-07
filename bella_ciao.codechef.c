#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x--)
 { long long int D,d,p,q;
 	scanf("%lld %lld %lld %lld",&D,&d,&p,&q);
 	long long int divident = D/d;
 	long long int remainder = D%d;
 	long long int amount = D*p + (((divident-1)*(divident))/2)*d*q + remainder*q*divident;
 	printf("%lld\n",amount);
 }	
}