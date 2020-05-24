#include<iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int x1, y1, x2, y2;
		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;
		if(x1 != x2 && y1 != y2)
			cout << "sad\n";
		else 
			if (x1 != x2)
			{
				if(x2 > x1)
					cout << "right\n";
				else
					cout << "left\n";
			}
			else
				if(y2 > y1)
					cout << "up\n";
				else
					cout << "down\n";
	}
	return 0;
}