#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	while(x--)
	{
		int N,M,i,j;
		scanf("%d %d",&N,&M);
		int t[N];
		for(i=0;i< N;i++)
		{
			t[i]=-1;
		}
		int a[N];
		for(i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		int b[M];		
		for(i=0;i<M;i++)
		{
			scanf("%d",&b[i]);
		}	
		for(i=0;i<N;i++)
		{	if(a[i] == 1)
			{
				t[i] = 0;
				break;
			}	
		}
		for(j=i+1;j<N;j++)
		{
			if(a[j] == 0)
			{
				t[j]=j-i;
			}
			else if(a[j] == 1)
			{
				t[j]=0;
				i=j;
			}
		}
		for(i=N;i>=0;i--)
		{
			if(a[i] == 2)
			{
				t[i]=0;
				break;
			}
		}
		for(int j=i-1;j>=0;j--)
		{
			if(a[j] == 0)
			{
				if(i-j<t[j])
					t[j]=i-j;
			}
			if(t[j] == -1)
			{
				t[j]=i-j;
			}
			else if(a[j] == 2)
			{
				t[j]=0;
				i=j;
			}
		}
		 t[0]=0;
		for(i=0;i<M;i++)
		{
			int j=b[i];
			int k=t[j-1];
			printf("%d",k);
			printf("%d",t[0]);
		}
	}
}