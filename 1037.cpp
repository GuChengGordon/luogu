#include<bits/stdc++.h>
using namespace std;

string str;
int s[33], num[33], k, nxt[33][16], qaq;
bool vis[10];
int ans[33];

void dfs(int x, int y)
{
	vis[x] = 1;
	if (vis[y])
		return;
	qaq++;
	for (int i = 1; i <= num[y]; i++)
		dfs(y, nxt[y][i]);
}

void mul()
{
	int jw = 0;
	for (int i = 30; i; i--)
	{
		ans[i] = ans[i] * qaq + jw;
		jw = ans[i] / 10;
		ans[i] %= 10;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
	ans[30] = 1;
	cin >> str >> k;
	int len = str.size();
	for (int i = 0; i < len; i++)
		s[i + 1] = str[i] - '0';
	for (int i = 1; i <= k; i++)
	{
		int x, y;
		cin >> x >> y;
		nxt[x][++num[x]] = y;
	}
	for (int i = 1; i <= len; i++)
	{
		qaq = 1;
		for (int j = 1; j <= num[s[i]]; j++)
			dfs(s[i], nxt[s[i]][j]);
		memset(vis, 0, sizeof(vis));
		mul();
	}
	int l = 0;
	for (; ans[l] == 0; l++);
	for (int i = l; i <= 30; i++)
		cout << ans[i];
	return 0;
}

