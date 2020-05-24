#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int N,M,L,P;
	int i = 0,j = 0;
	scanf("%d",&N);
	int num[N];
	M = N;
	P = N;
	while(M--)
	{
		scanf("%d",&num[i]);
		i++;
	}
	
	while(--P)
	{
		L = N;
		while(num[L] < num[L-1])
		{
			L--;
			swap(&num[L],&num[L-1]);
		}
	}

	while(j != N)
	{
		printf("%d\n",num[j]);
		j++;
	}
}

