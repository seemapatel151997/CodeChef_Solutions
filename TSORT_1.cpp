#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int N;
	int L;
	int i = 0,j = 0;
	scanf("%d",& const int N);
	int num[N];
	//P = N;
	while(i < N)
		scanf("%d",&num[i++]);
	
	while(--N)
	{
		L = N;
		while(--L)
		{
			if(num[L] < num[L-1])
				swap(&num[L],&num[L-1]);
		}
	}

	while(j != N)
		printf("%d\n",num[j++]);
}

