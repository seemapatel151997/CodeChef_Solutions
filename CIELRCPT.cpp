#include <stdio.h>
#include <math.h>

int main()
{
	int count,a,p,T,c,b;
	scanf("%d",&T);
	printf("\n");
	while(T--)
	{
		scanf("%d",&p);
		count=0;
		a = 12;
		while(a--)
		{
			b=a;
			c=pow(2,b);
			if(p >= c)
			{
				while(p >= c)
				{
					p = p - c;
					count++;
				}
			}
		}
		// if(p != 0)
		// {
		// 	goto here;
		// }
		printf("%d\n",count);
	}
	return 0;
}