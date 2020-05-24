#include <stdio.h>

int main()
{
	int T,N,count,a,b;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		scanf("%d",&N);
		a=100;
		count = 0;
		b = 1 ;
		while(N)
		{
			while(N/a)
			{
				N = N-a;
				count++;
			}
			b++;
			if(b == 2)
			{
				a = 50;
			}
			else if(b == 3)
			{
				a = 10;
			}
			else if(b == 4)
			{
				a = 5;
			}
			else if(b == 5)
			{
				a = 2;
			}
			else if(b == 6)
			{
				a = 1;
			}
		}
		printf("%d\n",count);
	}
}