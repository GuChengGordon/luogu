#include <bits/stdc++.h>
using namespace std;

int a[10005], l, m, s, e, ans;

int main()
{
	cin >> l >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> s >> e;
		for (int j = s; j <= e; j++)
			a[j] = 1;
	}
	for (int i = 0; i <= l; i++)
		if (a[i] == 0)
			ans++;
	cout << ans;
	return 0;
}
