#include <stdio.h>

int main()
{
	int T,N;
	scanf("%i",&T);
	while(T--)
	{
		int a = 0;
		scanf("%i",&N);
		int M = N;
		while(M-- != 1)
		{
			if(N % M == 0)
				a++;
		}
		if(a == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
}