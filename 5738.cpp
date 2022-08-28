#include <bits/stdc++.h>
using namespace std;

int n, m, a[105][25];
double ans = 0;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];
	for (int i = 1; i <= n; i++)
	{
		int sum = a[i][1], maxn = a[i][1], minn = a[i][1];
		for (int j = 2; j <= m; j++)
		{
			maxn = max(maxn, a[i][j]);
			minn = min(minn, a[i][j]);
			sum += a[i][j];
		}
		sum -= maxn + minn;
		ans = max(ans, (float)sum / (float)(m - 2) * 1.0);
	}
	cout << setiosflags(ios::fixed) << setprecision(2) << ans;
	return 0;
}

