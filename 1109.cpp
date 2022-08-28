#include <bits/stdc++.h>
using namespace std;

int n, a[100], l, r, s, s1, s2;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		s += a[i];
	}
	cin >> l >> r;
	if (s < l * n || s > r * n)
	{
		cout << -1;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] < l)
			s1 += l - a[i];
		if (a[i] > r)
			s2 += a[i] - r;
	}
	cout << max(s1, s2);
	return 0;
}

