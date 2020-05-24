#include <stdio.h>

int main()
{
	int A,B,C,T;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		scanf("%d%d",&A,&B);
		C = A + B;
		printf("%d\n",C);
	}
	return 0;
}
