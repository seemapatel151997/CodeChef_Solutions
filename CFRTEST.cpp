#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int N = n;
		int A[n];
		int a = 0;
		int g;
		while(n--)
		{
			g = 0;
			scanf("%d",&A[a]);
			int b = a ;
			int d;
			while(b--)
			{
				if(A[b] == A[a])
					g++;
				else if(A[b] == A[b+1])
					g++;
			}
			a++;
		}
		printf("%d\n",N-g);
	}
}