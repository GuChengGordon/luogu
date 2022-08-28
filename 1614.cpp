#include <bits/stdc++.h>
using namespace std;

int n, m, ans, sum;
int a[3005];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= m; i++)
		sum += a[i];
	ans = sum;
	for (int i = 2; i <= n - m + 1; i++)
	{
		sum += a[i + m - 1] - a[i - 1];
		if (ans > sum)
			ans = sum;
	}
	cout << ans;
	return 0;
}

