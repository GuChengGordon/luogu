#include <bits/stdc++.h>
using namespace std;

int n, a[105], s, t, ans;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	t = s / n;
	for (int i = 1; 2 * i < n; i++)
	{
		if (a[i] != t)
		{
			ans++;
			a[i + 1] += a[i] - t;
		}
		if (a[n + 1 - i] != t)
		{
			ans++;
			a[n - i] += a[n + 1 - i] - t;
		}
	}
	if (n % 2 == 0)
	{
		if (a[n / 2] != t && a[n / 2] + a[n / 2 + 1] == t * 2)
			ans++;
	}
	cout << ans;
	return 0;
}

