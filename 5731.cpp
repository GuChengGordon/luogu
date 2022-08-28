#include <bits/stdc++.h>
using namespace std;

int n, d;
int a[11][11];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main()
{
	cin >> n;
	for (int i = 0; i <= 10; i++)
	{
		a[0][i] = 1;
		a[i][0] = 1;
		a[n + 1][i] = 1;
		a[i][n + 1] = 1;
	}
	int i = 1;
	int j = 1;
	a[i][j] = 1;
	for (int x = 2; x <= n * n; x++)
	{
		if (a[i + dx[d]][j + dy[d]] == 0)
		{
			i += dx[d];
			j += dy[d];
			a[i][j] = x;
		}
		else
		{
			d = (d + 1) % 4;
			i += dx[d];
			j += dy[d];
			a[i][j] = x;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << setw(3) << a[i][j];
		cout << endl;
	}
	return 0;
}

