#include <bits/stdc++.h>
using namespace std;

char ch;
int n, m, x, y;
bool A[1005][1005];
int ans[100005], vis[1005][1005];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void dfs(int x, int y)
{
	int ax, ay;
	for (int i = 0; i < 4; i++)
	{
		ax = x + dx[i];
		ay = y + dy[i];
		if (ax > n || ax < 1 || ay > n || ay < 1)
			continue;
		if (vis[ax][ay])
			continue;
		if (A[ax][ay] == A[x][y])
			continue;
		vis[ax][ay] = vis[x][y];
		ans[vis[ax][ay]]++;
		dfs(ax, ay);
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> ch;
			A[i][j] = ch - '0';
		}
	for (int i = 1; i <= m; i++)
	{
		cin >> x >> y;
		if (vis[x][y] == 0)
		{
			vis[x][y] = i;
			ans[i]++;
			dfs(x, y);
		}
		cout << ans[vis[x][y]] << endl;
	}
	return 0;
}

