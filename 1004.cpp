#include <bits/stdc++.h>
using namespace std;

int n, x, y, num, dp[10][10][10][10], a[10][10];

int main()
{
	cin >> n;
	while (1)
	{
		cin >> x >> y >> num;
		if (x == 0 && y == 0 && num == 0)
			break;
		a[x][y] = num;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			for (int k = 1; k <= n; k++)
				for (int l = 1; l <= n; l++)
				{
					dp[i][j][k][l] = max(max(dp[i - 1][j][k - 1][l], dp[i - 1][j][k][l - 1]), max(dp[i][j - 1][k - 1][l], dp[i][j - 1][k][l - 1])) + a[i][j] + a[k][l];
					if (i == k && j == l)
						dp[i][j][k][l] -= a[i][j];
				}
	cout << dp[n][n][n][n];
	return 0;
}

