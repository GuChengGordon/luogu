#include <bits/stdc++.h>
using namespace std;

int n, a[105];

int main()
{
	cin >> n;
	cout << n << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			a[j] ^= 1;
		a[i] ^= 1;
		for (int j = 1; j <= n; j++)
			cout << a[j];
		cout << endl;
	}
	return 0;
}

