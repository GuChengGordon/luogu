#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans1, ans2;

int main()
{
	cin >> n >> m;
	for (int x1 = 1; x1 <= n; x1++)
		for (int y1 = 1; y1 <= m; y1++)
			for (int x2 = x1; x2 <= n; x2++)
				for (int y2 = y1; y2 <= m; y2++)
					if (x2 - x1 == y2 - y1)
						ans1++;
					else
						ans2++;
	cout << ans1 << " " << ans2 << endl;
	return 0;
}

