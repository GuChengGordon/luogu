#include <bits/stdc++.h>
using namespace std;

bool a[22][22][22];
int w, x, h, q, ans;
int x1, y11, z1, x2, y2, z2;

int main()
{
	cin >> w >> x >> h >> q;
	for (int i = 1; i <= q; i++)
	{
		cin >> x1 >> y11 >> z1 >> x2 >> y2 >> z2;
		for (int xx = x1; xx <= x2; xx++)
			for (int yy = y11; yy <= y2; yy++)
				for (int zz = z1; zz <= z2; zz++)
					a[xx][yy][zz] = 1;
	}
	for (int i = 1; i <= w; i++)
		for (int j = 1; j <= x; j++)
			for (int k = 1; k <= h; k++)
				if (a[i][j][k] == 0)
					ans++;
	cout << ans;
	return 0;
}

