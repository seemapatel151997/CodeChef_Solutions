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
     	int c=0;
		scanf("%d",&N);
		c = N % 10;
		N = (N - c) / 10;
		b = c;
		while(N)
		{
			c = N % 10;
			N = (N - c) / 10;
		}
		b = b + c;
		printf("%d\n",b);
	}
} 