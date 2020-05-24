#include <stdio.h>
#include <math.h>

int main()
{
	int T,N,M,c,a,b,f,d;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		a=0;
		d=0;
		scanf("%d",&N);
		int A[N];
		M = N;
		a=0;
		f=0;
		while(N)
		{
			int c = N % 10;
			N = (N - c) / 10;
			A[a]= c;
			a++;
		}
		while(a--)
		{
			int g = pow(10,d);
			b = A[a]*g;
			d++;
			f = f+b;
		}
		if(f == M)
		{
			printf("wins\n");
		}
		else
		{
			printf("losses\n");
		}
	}
}