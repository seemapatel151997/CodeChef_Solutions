#include <stdio.h>

int main()
{
	int n,l,a,b,max;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&l);
		int A[l][l];
		printf("\n");
		while(l--)
		{
			a=0;
			while(a <= l)
			{
				b=0;
				while(b <= a)
				{
					if (a == (l-1) && b==0)
					{
						max = A[a][b];
					}
					scanf("%d",&A[a][b]);
					if (A[a][b] > max)
					{
						max = A[a][b];
					}
					b++;
				}
				a++;
			}
			printf("%d\n",max);
		}
	}
	return 0;
} 
