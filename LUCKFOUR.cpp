#include <stdio.h>
#include <math.h>
 
int main()
{
	int T,N,count;
	scanf("%d",&T);
	printf("\n");
	while(T--)
		{
	     	int b=0;
			scanf("%d",&N);
			count = 0;
			while(N)
			{
				int c = N % 10;
				if(c == 4)
				{
					count++;
				}
				N = (N - c) / 10;
			}
			printf("%d\n",count);
		}
}  