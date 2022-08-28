#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < 10; i++)
		if (a[i] <= n + 30)
			ans++;
	cout << ans;
	return 0;
}
