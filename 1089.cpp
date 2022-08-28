#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, a = 0, s = 0;
	for (int i = 1; i <= 12; i++)
	{
		cin >> x;
		a += 300 - x;
		if (a < 0)
		{
			cout << -i;
			return 0;
		}
		s += a / 100;
		a = a % 100;
	}
	cout << s * 120 + a;
	return 0;
}
