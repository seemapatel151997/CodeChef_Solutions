#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int K = N , M = N;
	int A[N++],B[N],C[N];
	int i = 1, j = 1 ,k = 1, d;
	int Lead = 0, Win;
	C[0] = 0, A[0] = 0, B[0] = 0;
	while(M--)
	{
		scanf("%d%d",&A[i],&B[i]);
		A[i] += A[i-1];
		B[i] += B[i-1];
		i++;
	}
	while(K--)
	{
		if(A[j] > B[j])
		{
			C[k] = A[j] - B[j];
			d = 1;

		}
		else if(A[j] < B[j])
		{
			C[k] = B[j] - A[j];
			d = 2;
		}

		if(C[k] > Lead)
		{
			Lead = C[k];
			Win = d;
		}

	k++,j++;
	}
	printf("%d\t%d",Win,Lead);
}