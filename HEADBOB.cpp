#include <stdio.h>

int main()
{
	int T;
	scanf("%i",&T);
	while(T--)
	{
		int N;
		scanf("%i",&N);
		int M = N, i = 0, a = 0;
		char sig[N];
		scanf("%s",&sig[0]);
		while(M--)
		{
			if(sig[i] == 'I')
			{
				printf("INDIAN\n");
				a++;
				break;
			}
			else if(sig[i] == 'Y')
			{
				printf("NOT INDIAN\n");
				a++;
				break;
			}
			i++;
		}
		if(a == 0)
			printf("NOT SURE\n");
	}
}