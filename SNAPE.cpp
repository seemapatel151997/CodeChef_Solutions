#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
	int T,A,B;
	float a,b;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&A,&B);
		a = sqrt(abs(pow(B,2) - pow(A,2)));
		b = sqrt(pow(B,2) + pow(A,2));
		printf("%.4f\t%.4f\n",a,b);
	}
} 