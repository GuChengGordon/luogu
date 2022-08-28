#include <bits/stdc++.h>
using namespace std;

int n;
int a[105], lft[105], rgh[105];
int ans;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		lft[i] = 1;
		rgh[i] = 1;
	}
	for (int i = 2; i <= n; i++)
		for (int j = 1; j < i; j++)
			if (a[j] < a[i])
				lft[i] = max(lft[i], lft[j] + 1);
	for (int i = n - 1; i >= 1; i--)
		for (int j = i + 1; j <= n; j++)
			if (a[j] < a[i])
				rgh[i] = max(rgh[i], rgh[j] + 1);
	ans = 0;
	for (int i = 1; i <= n; i++)
		ans = max(ans, lft[i] + rgh[i] - 1);
	cout << n - ans;
	return 0;
}

