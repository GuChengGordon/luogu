#include <bits/stdc++.h>
using namespace std;
int a[20][20];

int func(int x, int y)
{
	if (x == 0 && y == 0)
		return 1;
	else
		if (a[x][y] == 0)
			return 0;
		else
			return func(x-1, y) + func(x, y-1);
}

int main()
{
	int m, n, x, y;
	scanf("%d%d%d%d", &n, &m, &x, &y);
	for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            a[i][j] = -1;
	a[x][y] = 0;
	a[x + 1][y + 2] = 0;
	a[x + 1][y - 2] = 0;
	a[x - 1][y + 2] = 0;
	a[x - 1][y - 2] = 0;
	a[x + 2][y + 1] = 0;
	a[x + 2][y - 1] = 0;
	a[x - 2][y + 1] = 0;
	a[x - 2][y - 1] = 0;
	cout << func(n, m);
	return 0;
}
