#include <stdio.h>

int main()
{
	int T,N,M,j,k,i,GCD,a,ch,min,count,h,l;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		M=N;
		int A[N];
		while(N--)
		{
			scanf("%d",&A[M-N]);
		}
		printf("\n");
		min = A[1];
		for(i=1;i<N;i++)
		{
			if(A[i] < min)
			{
				min = A[i];
			}
		}
		printf("%d\n",min);
		for(j=min/2 ,k=0;j>=2,k<=N;j--,k++)
		{
//			for(k=0;k<=N;k++)
//			{
				if((A[0] % j) == 0)
				{
					count++;
				}
				printf("%d\t",count);
//			}
		// 	if(count == N)
		// 	{
		// 		for(l=0;l<=N;l++)
		// 		{
		// 			A[l]=A[l]/j;
		// 		}
		// 	}
		// }
		// for(h=0;h<=N;h++)
		// {
		// 	printf("%d\t",A[h]);
		}
	}
	printf("\n");
	return 0;
}
