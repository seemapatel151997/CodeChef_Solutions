#include <stdio.h>

int sec_largest(int a,int b,int c);

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int A,B,C;
		scanf("%d%d%d",&A,&B,&C);
		printf("%d\n",sec_largest(A,B,C));
	}
}

int sec_largest(int a,int b,int c)
{
	int x;
	if((a > b && a < c) || (a > c && a < b))
		x = a;
	else if((b > a && b < c) || (b > c && b < a))
		x = b;
	else
		x = c;

	return x; 
}