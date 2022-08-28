#include <bits/stdc++.h>
using namespace std;

bool f[21][21];
int a[21];
int path[21], ans[21], cnt;
bool b[21];
int n;
int maxx;

bool chck(int x)
{
	for (int i = 1; i <= n; i++)
	{
		if (f[x][i] && !b[i])
			return false;
 	}
 	return true;
}

void dfs(int x, int stp, int sum)
{
	if (chck(x))
	{
		if (maxx < sum)
		{
			maxx = sum;
			cnt = stp;
			for (int i = 1; i <= stp; i++)
			ans[i] = path[i];	
		}
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (f[x][i] && !b[i])
		{
			b[i] = 1;
			path[stp + 1] = i;
			dfs(i, stp + 1, sum + a[i]);
			b[i] = 0;
		}
		
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++)
		{
			cin>>f[i][j];
		}
	for (int i = 1; i <= n; i++)
	{
		b[i] = 1;
		path[1] = i;
		dfs(i, 1, a[i]);
		b[i] = 0;
	}
	for (int i = 1; i <= cnt; i++)
	cout << ans[i] << ' ';
	cout << endl << maxx;
	return 0;
}

