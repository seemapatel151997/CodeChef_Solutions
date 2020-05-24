#include <stdio.h>
 
int main()
{
	printf("\n");
	while(1)
	{
		int a=0,b=0,c=1;
		int n,r,e=1,f=0;
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		int x=n,y=n,z=n;
		int A[n+1],B[n+1],C[n+1];
		while(n--)
		{
			A[a]=a+1;
			a++;
		}
		while(x--)
		{
			scanf("%d",&r);
			C[c]=r;
			c++;
			B[r]=A[b];
			b++;
		}
		while(y--)
		{
			if(C[e]==B[e])
			{
				e++;
				f++;
			}
		}
		if(f == z)
		{
			printf("ambiguous");
		}
		else
		{
			printf("not ambiguous");
		}
		printf("\n");
	}
	return 0;
} 
