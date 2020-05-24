#include <stdio.h>
 
int main()
{
	int T,N,n,b,a,count,M,c,d;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		n=1;
		a = (4*n) - 1;
		M = N;
		d=0;
		while(M > a)
		{
			count = 0;
			N = M;
			while(N > a)
			{
				a = (4*n) - 1;
				N = N - 2;
				count++;
			}
			c = (2*count) - 1;
			d = d + c;
			n++;
			a = (4*n) - 1;
		}
		printf("%d\n",d);
	}
	return 0;
} 