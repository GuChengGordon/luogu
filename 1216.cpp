#include <bits/stdc++.h>
using namespace std;

int r, a[1005][1005];
int dp[1005][1005], ans = INT_MIN;

int main()
{
	cin >> r;
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= i; j++)
			cin >> a[i][j];
	dp[1][1] = a[1][1];
	for (int i = 2; i <= r; i++)
		for (int j = 1; j <= i; j++)
			dp[i][j] = a[i][j] + max(dp[i - 1][j], dp[i - 1][j - 1]);
	for (int i = 1; i <= r; i++)
		if (dp[r][i] > ans)
			ans = dp[r][i];
	cout << ans;
	return 0;
}

