#include <bits/stdc++.h>
using namespace std;

int n;
long long x, ans, a[35];

int main()
{
	while (cin >> x)
	{
		n++;
		a[n] = x;
	}
	for (int i = 1; i <= n; i++)
		ans += (long long)(a[i] << n - 1);
	cout << ans;
	return 0;
}

