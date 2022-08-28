#include <bits/stdc++.h>
using namespace std;

int ans, s, n, a, b = 0;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a > b)
			s++;
		else
		{
			ans = max(ans, s);
			s = 1;
		}
		b = a;
	}
	ans = max(ans, s);
	cout << ans;
	return 0;
}

