#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int B;
		scanf("%d",&B);
		if(B < 1500)
		{
			printf("%.2lf\n",(B + B*0.1 + B*0.9));
		}
		else
			printf("%.2lf\n",(B + 500 + B*0.98));
	}
}