#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x--)
	{
		long long int N,M;
		long long int _=1;
		scanf("%lld %lld",&N,&M);
		long long int ans = power(2, N);
		ans=ans-1;
		long long int res = power(ans, M);
		printf("%lld\n", res);
	}
}
int power(long long int a,long long int b)
{	
	long long int res=1,mod=1000000007;
	while(b>0){
		if(b & 1)
		res = (res*a%mod);
		a = (a*a)%mod;
		b = b>>1;
	}	
	return res;
}

 