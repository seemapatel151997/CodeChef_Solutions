#include <stdio.h>
#include <math.h>

int main()
{
	int T,N;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
	     	int b=0;
		scanf("%d",&N);
		while(N)
		{
			int c = N % 10;
			b = b + c;
			N = (N - c) / 10;
		}
		printf("%d\n",b);
	}
	return 0;
}
