#include <stdio.h>
int max(int x,int y);

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N1,N2;
		scanf("%d%d",&N1,&N2);
		int mn = max(N1,N2);
		printf("%d  %d\n",mn,N1+N2);
	}
}

int max(int x,int y)
{
	int z;
	if(x > y)
		z = x;
	else
		z = y;

	return z;
}