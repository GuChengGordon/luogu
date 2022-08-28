#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[10001], u[10001];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		int x = a[i];
		for (int j = 1; j <= a[i]; j++)
			x -= u[j];
		u[a[i]] = 1;
		a[i] = x - 1;
	}
	a[n] += m;
	for (int i = n; i > 0; i--)
	{
		a[i - 1] += a[i] / (n - i + 1);
		a[i] %= n - i + 1; 
	}
	memset(u, 0, sizeof(u));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= a[i]; j++)
			if (u[j])
				a[i]++;
		cout << a[i] + 1 << " ";
		u[a[i]] = 1;
	}
	return 0;
}
