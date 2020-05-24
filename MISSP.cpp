#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N;
		scanf("%d",&N);
		int num[N],i = 0,M = N;
		while(N--)
			scanf("%d",&num[i++]);
		for(int i = 0;i < M; i++)
		{
			int temp = 0;
			for(int j = 0;j < M;j++)
				if(num[i] == num[j])
					temp++;
			if(temp % 2 != 0)
				printf("%d\n",num[i]);
		}
	}
}