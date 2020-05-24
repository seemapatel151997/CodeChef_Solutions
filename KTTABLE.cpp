#include<iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N, n1 = 0, n2 = 0;
		cin >> N;
		long long int A[N], B[N];

		while (n1++ != N)
			cin >> A[n1-1];

		while (n2++ != N)
			cin >> B[n2 - 1];

		int count = 0;

		while(N--)
			if (B[N] <= (A[N]-A[N-1]) && N > 0)
				count++;
			else if (B[0] <= A[0] && N == 0)
				count++;

		cout << count << "\n";
	}
}