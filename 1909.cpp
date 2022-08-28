#include <bits/stdc++.h>
using namespace std;

int a[3][2];

int main()
{
	long long n, ans = INT_MAX;
	cin >> n;
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i][0] >> a[i][1];
		ans = min(ans, ((n - 1) / a[i][0] + 1) * a[i][1]);
	}
	cout << ans;
	return 0;
}
