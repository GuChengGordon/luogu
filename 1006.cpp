#include <bits/stdc++.h>
using namespace std;

int m, n;
int a[55][55], dp[55][55][55][55];

int main()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			for (int k = 1; k <= m; k++)
				for (int l = 1; l <= n; l++)
				{
					dp[i][j][k][l] = max(max(dp[i - 1][j][k - 1][l], dp[i - 1][j][k][l - 1]), max(dp[i][j - 1][k - 1][l], dp[i][j - 1][k][l - 1])) + a[i][j] + a[k][l];
					if (i == k && j == l)
						dp[i][j][k][l] -= a[i][j];
				}
	cout << dp[m][n][m][n];
	return 0;
}

