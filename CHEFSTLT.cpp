#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string S1;
		string S2;
		int max = 0, min = 0;

		cin >> S1;
		cin >> S2;
		int length = S1.length();
		while(length--)
		{
			if ((S1[length] != S2[length]) && S1[length] != '?' && S2[length] != '?')
			{
				max++;
				min++;
			}
			else if((S1[length] != S2[length]) && (S1[length] == '?' || S2[length] == '?'))
				max++;
			else if(S1[length] == '?' && S2[length] == '?')
				max++;
		}
		cout << min << " " << max << "\n";
	}
}