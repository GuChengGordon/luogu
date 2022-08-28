#include <bits/stdc++.h>
using namespace std;

int n, m, a[2005][2005], dp[2005][2005], minn = INT_MAX;

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[j][i];
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			dp[i][j] = min(dp[i - 1][j], dp[i - 1][(j == 1)?m:(j - 1)]) + a[i][j];
	for (int i = 1; i <= m; i++)
		minn = min(minn, dp[n][i]);
	cout << minn << endl;
	return 0;
}

