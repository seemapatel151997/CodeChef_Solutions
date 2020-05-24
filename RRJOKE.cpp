#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		T++;
		int N,M;
		scanf("%d",&N);
		
		N++;
		while(N--)
		{
			int Cor[N][2];
			M = N;
			int O = N;
			while(M--)
			{
				scanf("%d%d",&Cor[M][0],&Cor[M][1]);
				printf("%d\t%d\n",Cor[M][0],Cor[M][1]);
			}
		}
	}
	return 0;
}