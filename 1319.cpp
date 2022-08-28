#include <bits/stdc++.h>
using namespace std;

int s, n, a[40005], l;

int main()
{
	cin >> n;
	int x;
	for (x = 1; s < n * n; x++)
	{
		cin >> a[x];
		s += a[x];
	}
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= a[i]; j++)
		{
			l++;
			if (i % 2 == 0)
				cout << 1;
			else
				cout << 0;
			if (l == n)
			{
				l = 0;
				cout << endl;
			}
		}
	}
	return 0;
}

