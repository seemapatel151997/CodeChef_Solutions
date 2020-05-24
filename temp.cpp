#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int A,B;
	scanf("%d%d",&A,&B);
	if(A > B)
	{
		swap(&A,&B);
	}
	printf("A = %d\tB = %d",A,B);
}