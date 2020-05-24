#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int A,B;
		cin >> A;
		cin >> B;
		int C = A;
		int D = B;
		while(C != D)
		{
			if(C > D)
				C -= D;
			else
				D -= C;
		}
		A /= C;
		B /= C;
		cout << A*B << "\n"; 
	}
}