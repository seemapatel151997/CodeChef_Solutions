#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		int r=0;
		int N,M,K;
		int a=0,b=0;
		scanf("%d%d%d",&N,&M,&K);
		int mk[N];
		int M1 = M,K1 = K;
		int M2 = M,K2 = K;
		int M3 = M,K3 = K;
		int m[M],k[K];
		int g=0;
		while(M1--)
		{
			scanf("%d",&m[a]);
			a++;
		}
		while(K1--)
		{
			scanf("%d",&k[b]);
			b++;
		}
		if(M2 > K2)
			while(M2--)
			{
				K2 = K3;
				while(K2--)
					if(m[M2] == k[K2])
						g++;
			}
		else
			while(K2--)
			{
				M2 = M3;
				while(M2--)
					if(k[K2] == m[M2])
						g++;
			}

		N++;

		while(N--)
			if(N>0)
			{
				int q = 0;
				M3 = M;
				while(M3--)
					if(N != m[M3])
						q++;

				K3 = K;
				while(K3--)
					if(N != k[K3])
						q++;

				if(q == (M+K))
				{
					r++;
				}
			}
			
		printf("%d\t%d\n",g,r);
	}
}