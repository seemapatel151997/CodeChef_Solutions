#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	scanf("%i",&T);
	while(T--)
	{
		int N;
		scanf("%i",&N);
		int M = N;
		int L = N;
		int a[N],b[N],i = 0,j = 0;
		while(N--)
		{
			scanf("%i",&a[i]);
			b[i] = a[i++];	
		}
		M--;
		while(M--)
		{
			b[i-1] = __gcd(b[i],b[i-1]);
			i--;
		}
		while(L--)			
			printf("%d ",a[j++]/b[i]);
		printf("\n");
	}
}