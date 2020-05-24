#include <stdio.h>

int min(int a,int b);
int max(int a,int b);

int main()
{
	int T;
	scanf("%i",&T);

	while(T--)
	{
		int N,b = 0;
		scanf("%i",&N);

		int M = N,L = N,O = N,K = N,i = 0,j = 0,k = 0,l = 0,m = 0,n[N];

		while(M--)
			scanf("%i",&n[i++]);

		while(N--)
		{
			b = max(n[j],b);
			j++;
		}

		int c = b,d = b;
		while(L--)
		{
			c = min(n[k],c);
			k++;
		}

		while(K--)
		{
			if(n[m] == c)
				n[m] = b;
			m++;
		}

		while(O--)
		{
			d = min(n[l],d);
			l++;
		}
		printf("%i\n",d + c);
	}
}

int min(int a,int b)
{
	if(a < b)
		return a;
	else
		return b;
}

int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}