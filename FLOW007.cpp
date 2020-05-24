#include <stdio.h>

int main()
{
	int T, N;
	int loop = 0;
	scanf("%d",&T);
	while(loop++ != T)
	{
		int  L=0, i = 0, j = 0;
		scanf("%d",&N);
		int W = N;
		while(W > 0)
		{
			W = W/10;
			L++;
		}
		int a[L];
		int l = L;
		while(L--)
		{
			a[i] = N % 10;
			N = (N - a[i++]) / 10;
		}
		int  k = 0;
		for (j = 0; j < l; j++)
    		k = 10 * k + a[j];
    	printf("%d",k);
		// while(l--)
		// {
		// 	printf("%d",a[j++]);
		// }
		printf("\n");
	}
}