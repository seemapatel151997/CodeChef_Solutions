#include<iostream>
using namespace std;

int main()
{
	long long int T;
	cin >> T;

	long long int i=0, N;
	while(i++ != T)
	{
		cin >> N;
		long long int j = 1;
		while(N >= j)
		{
			N -= j++;
			// cout << N << "\n";
		}
		cout << j-1 << "\n";
	} 
}