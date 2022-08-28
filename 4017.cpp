#include <bits/stdc++.h>
using namespace std;

int n, m;
bool arr[5005][5005];
long long ans;

void dfs(int x)
{
	bool f = false;
	for (int i = 1; i <= n; i++)
	{
		if (arr[x][i] == 1)
		{
			f = true;
			dfs(i);
		}
	}
	if (f == false)
		ans++;
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[b][a] = 1;
	}
	bool f = false;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (arr[i][j] == 1)
				f = true;
		if (f == false)
			dfs(i);
	}
	cout << ans % 80112002;	
	return 0;
}

