#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long int N;
	cin >> N;

	long long int rs[N];
	for (long long int i = 0; i != N; i++)
		cin >> rs[i];

	sort(rs,rs+N);
	long long int sum = rs[0]*N;

	for (long long int i=0; i != N; i++)
		if (sum < rs[i]*(N-i))
			sum = rs[i]*(N-i);

	cout << sum;
	return 0;
}