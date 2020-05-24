#include<iostream>
using namespace std;

int main()
{
	int T, M, N, O, m, count, j, I, i;
	cin >> T;
	while(T--)
	{
		cin >> M >> N;
		string A[M], B[50*N];
		m = M;
		j = 0, i = 0;

		while(m--)
			cin >> A[M-m-1];

		while(N--)
		{
			cin >> O;
			while(O--)
				cin >> B[i++];
		}

		I = i;
		while(M--)
		{
			count = 0;
			i = I;
			while(i--)
				if(A[j] == B[i])
					count++;
			j++;


			if(count > 0)
				cout << "YES ";
			else
				cout << "NO ";
		}
		cout << "\n";
	}
	return 0;
}