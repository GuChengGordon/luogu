#include <bits/stdc++.h>
using namespace std;

int sum, n, maxn;
int a[200005], b[200005];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	maxn = a[1];
	for (int i = 1; i <= n; i++)
	{
		sum = max(sum, 0) + a[i];
		maxn = max(sum, maxn);
	}
	cout << maxn << endl;
	return 0;
}

