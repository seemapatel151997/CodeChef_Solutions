#include <iostream>
using namespace std;
int main()
{
	int T;
	int H,S;
	float C;
	cin >> T;
	int grade;
	while(T--)
	{
		cin >> H >> C >> S;
		if (H > 50 && C < 0.7 && S > 5600)
			grade = 10;
		else if(H > 50 && C < 0.7)
			grade = 9;
		else if(C < 0.7 && S > 5600)
			grade = 8;
		else if(H > 50 && S > 5600)
			grade = 7;
		else if(H > 50 || C < 0.7 || S > 5600)
			grade = 6;
		else
			grade = 5;
		cout << grade << "\n";
	}
}