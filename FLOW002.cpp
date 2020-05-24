#include <stdio.h>
 
int main()
{
	int T,A,B,C;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		scanf("%d%d",&A,&B);
		C = A % B;
		printf("%d\n",C);
	}
} 