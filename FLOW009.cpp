#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		float Q,P;
		cin >> Q >> P;
		float E = Q * P;

		if(Q > 1000)
			cout << fixed << setprecision(6) << E*0.9 <<endl;
		else
			cout << fixed << setprecision(6) << E << endl;
	}
}