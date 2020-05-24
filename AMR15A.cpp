#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	printf("\n");
	int a,b;
	while(N--)
	{
		int A;
		a = 0,b = 0;
		scanf("%d",&A);
		if(A%2 == 0)
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	if(a > b)
	{
		printf("READY FOR BATTLE\n");
	}
	else
	{
		printf("NOT READY\n");
	}
}