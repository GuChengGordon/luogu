#include <bits/stdc++.h>
using namespace std;

int n, ans = 1;

int main()
{
	cin >> n;
	for (int i = 1; i < n; i++)
		ans = (ans + 1) << 1;
	cout << ans;
	return 0;
}

