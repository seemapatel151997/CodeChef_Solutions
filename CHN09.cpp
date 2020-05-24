#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		string in;
		cin >> in;
		int i = 0;
		int A=0, B=0;
		int l = in.length(); 
		while(l--)
		{
			if(in[i] == 'a')
			{
				A++;
			}
			else
				B++;
			i++;
		}
		cout << min(A,B) << "\n";
	}
}