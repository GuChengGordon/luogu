#include <bits/stdc++.h> 
using namespace std;

int n, l, p, maxn, minn;

int main()
{
	cin >> l >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> p;
		maxn = max(maxn, max(l - p, p - 1));
		minn = max(minn, min(l - p, p - 1));
	}
	cout << minn << " " << maxn;
	return 0;
}

