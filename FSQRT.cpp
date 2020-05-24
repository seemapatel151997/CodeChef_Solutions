#include <stdio.h>
#include <math.h>

int main()
{
	int T,N,a;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		scanf("%d",&N);
		a = sqrt(N);
		printf("%d\n",a);
	}
}