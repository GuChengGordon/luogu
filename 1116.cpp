#include <bits/stdc++.h>
using namespace std;

int a[10005], n, ans;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 2; i <= n; i++)
		for (int j = 1; j < i; j++)
			if (a[j] > a[i])
				ans++;
	cout << ans;
	return 0;
}

