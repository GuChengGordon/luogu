#include <bits/stdc++.h>
using namespace std;

int w, n, p[30005], ans;

int main()
{
	cin >> w >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	int l = 1, r = n;
	sort(p + 1, p + n + 1);
	while (l <= r)
	{
		if (p[l] + p[r] <= w)
		{
			l++;
			r--;
			ans++;
		}
		else
		{
			r--;
			ans++;
		}
	}
	cout << ans;
	return 0;
}

