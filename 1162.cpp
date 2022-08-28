#include <bits/stdc++.h>
using namespace std;

int n;
int a[50][50], f[50][50];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

void func(int x, int y)
{
	if (f[x][y] == 1 || x < 1 || x > n || y < 1 || y > n)
		return;
	f[x][y] = 1;
	for (int i = 1; i <= 4; i++)
	{
		func(x + dx[i - 1], y + dy[i - 1]);
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			f[i][j] = a[i][j];
		}
	for (int i = 1; i <= n; i++)
	{
		func(i, 1);
		func(i, n);
		func(1, i);
		func(n, i);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (f[i][j] == 0)
				cout << 2 << " ";
			else
				cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}

