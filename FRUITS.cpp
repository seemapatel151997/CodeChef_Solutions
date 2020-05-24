#include <stdio.h>

int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,M,K;
		scanf("%d%d%d",&N,&M,&K);
		if(max(N, M) - min(N, M) - K <= 0)
		{
		    int a = 0;
			printf("%d\n",a);
		}
		else
			printf("%d\n",max(N, M) - min(N, M) - K);
	}
}