#include <stdio.h>

int main()
{
	int T;
	scanf("%i",&T);
	while(T--)
	{
		int N;
		scanf("%i",&N);
		long long int a = 1;
		N;
		while(N)
		{
			a = a * N--;
		}
		printf("%lli\n",a);
	}
}