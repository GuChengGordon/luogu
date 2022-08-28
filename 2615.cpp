#include <bits/stdc++.h>
using namespace std;

int n, x, y, a[41][41];

int main()
{
	cin >> n;
	a[(n + 1) / 2][1] = 1;
	x = (n + 1) / 2;
	y = 1;
	for (int i = 2; i <= n * n; i++)
	{
		if (x != n && y == 1)
		{
			x++;
			y = n;
			a[x][y] = i;
		}
		else if (x == n && y != 1)
		{
			x = 1;
			y--;
			a[x][y] = i;
		}
		else if (x == n && y == 1)
		{
			y++;
			a[x][y] = i;
		}
		else if (x != n && y != 1)
		{
			if (a[x + 1][y - 1] == 0)
			{
				x++;
				y--;
				a[x][y] = i;
			}
			else
			{
				y++;
				a[x][y] = i;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[j][i];
			if (j != n)
				cout << " ";
		}
		if (i != n)
			cout << endl;
	}
	return 0;
}

