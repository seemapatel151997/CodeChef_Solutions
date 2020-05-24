#include <stdio.h>

int main()
{
	int A,B,D;
	scanf("%d%d",&A,&B);
	int C = A - B;
	while ( C / 10 != 0)
	{
		D = C / 10;
	}
	printf("%d\n",D);
	return 0;
}