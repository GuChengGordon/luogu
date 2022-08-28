#include <bits/stdc++.h>
using namespace std;

int s, a, b, c, n;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		c += a + b - 8;
		s += c;
	}
	cout << s;
	return 0;
}

