#include <bits/stdc++.h>
using namespace std;

int a[105][105], dp[105][105];
int r, c;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int vis[105][105];

int dfs(int x, int y)
{
	int xx, yy, maxn = 0;
	for (int i = 0; i <= 3; i++)
	{
		xx = x + dx[i];
		yy = y + dy[i];
		if (xx >= 1 && xx <= r && yy >= 1 && yy <= c && a[xx][yy] < a[x][y])
			if (vis[xx][yy] == 0)
			{
				maxn = max(maxn, dfs(xx, yy));
				vis[xx][yy] = dfs(xx, yy);
			}
			else
				maxn = max(maxn, vis[xx][yy]);
	}
	return maxn + 1;
}

int main()
{
	int x, y, maxn = 0;
	cin >> r >> c;
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
		{
			cin >> a[i][j];
		}
	for (int i = 1; i <= r; i++)
		for (int j = 1; j <= c; j++)
			maxn = max(maxn, dfs(i, j)); 
	cout << maxn;
	return 0;
}

