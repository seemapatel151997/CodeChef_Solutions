#include <stdio.h>
#include <math.h>

int main()
{
	int T;
	scanf("%i",&T);
	while(T--)
	{
		int a = 0;
		int R,Ax,Ay,Bx,By,Cx,Cy;
		scanf("%i",&R);
		scanf("%i%i",&Ax,&Ay);
		scanf("%i%i",&Bx,&By);
		scanf("%i%i",&Cx,&Cy);

		float Dab = sqrt(pow((Ax - Bx),2) + pow((Ay - By),2));
		float Dbc = sqrt(pow((Bx - Cx),2) + pow((By - Cy),2));
		float Dca = sqrt(pow((Cx - Ax),2) + pow((Cy - Ay),2));
		if(Dab <= R)
			a++;
		else
		{
			if(Dbc <= R && Dca <= R)
				a++;
		}

		if(Dbc <= R)
			a++;
		else
		{
			if(Dab <= R && Dca <= R)
				a++;
		}

		if(Dca <= R)
			a++;
		else
		{
			if(Dab <= R && Dbc <= R)
				a++;
		}

		if(a == 3)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}