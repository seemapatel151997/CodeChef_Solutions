#include<stdio.h>

int main()
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		if(N%2==1)
		{
			int out=N-N/2;
			printf("%d\n",out);
		}
		else
		{
			int out=(N-N/2)+1;
			printf("%d\n",out);
		}
	}
	return 0;
}
