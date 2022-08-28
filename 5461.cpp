#include <bits/stdc++.h>
using namespace std;

int n;
int a[1234][1234];

int main()
{
	cin >> n;
	n = (1 << n);
	a[0][n + 1] = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			a[i][j] = a[i - 1][j] ^ a[i - 1][j + 1];
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

