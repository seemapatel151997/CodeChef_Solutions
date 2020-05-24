#include <iostream>
#include <string>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string S;
		cin >> S;
		int L = S.length();
		int temp[26] = {0};
		int Count[L],max=0,sum=0;
		while(L--)
			for(int i = 'a';i <= 'z';i++)
				if(S[L] == i)
					temp[i-97]++;
		for(int i = 0;i < 26;i++)
			if(temp[i] > max)
				max = temp[i];
		for(int i = 0;i < 26;i++)
			sum += temp[i];
		if(sum == (2*max))
			cout << "YES\n";
		else
			cout << " NO\n";
	}
}
