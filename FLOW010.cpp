#include <stdio.h>

int main()
{
	int T;
	scanf("%d",&T);

	while( T-- )
	{
		char C;
		scanf(" %c",&C);

		if(C == 'B' || C == 'b')
		{
			printf("BattleShip\n");
		}
		else if(C == 'C' || C == 'c')
		{
			printf("Cruiser\n");
		}
		else if(C == 'D' || C == 'd')
		{
			printf("Destroyer\n");
		}
		else if(C == 'F' || C == 'f')
		{
			printf("Frigate\n");
		}
	}
	return 0;
}