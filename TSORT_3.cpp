#include <stdio.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//void Quicksort();

int main()
{
	int N;
	scanf("%d",&N);
	int num[N];
	int M = N;
	int i = 0;
	while(M--)
		scanf("%d",&num[i++]);


	int m = 0;

	printf("\n\n");

	int *pivot = &num[N-1];
	int b = (N-1)/2 , l = *(pivot - 1) + 1,h = 1;

	int *LOW = pivot - l;
	int *HIGH = pivot - h;
	printf("\n\n");

	
	while(b--)
	{
		printf("%d \t\t %d\t\t %d\n\n",*LOW,*HIGH,*pivot);
		if((*LOW < *pivot) || (*HIGH > *pivot))
		{			
			if(*LOW < *pivot)
			{
				LOW++;
				printf("If_LOW\n");
			}
			if(*HIGH > *pivot)
			{
				HIGH--;
				printf("If_HIGH\n");
			}
			
		}
		else
		{
			swap(LOW,HIGH);
			printf("elseeee\n");
		}

		// if ((*(pivot-k) < *pivot) || (*(pivot -(N-k)) > *pivot))
		// {
		// 	swap(pivot-k,pivot-(N-k));
		// 	printf("hello\n");
		// }
		// k++;
	}


	
	int j = 0;

	while(j != N)
		printf("%d\n",num[j++]);


	if(*LOW > *pivot)
	{
		swap(LOW,pivot);

	}
	printf("\n\n%d\n",*pivot);


}
