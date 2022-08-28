#include <bits/stdc++.h>
using namespace std;

int n, x, ans[8];
int v[7];

int main()
{
	cin >> n;
	for (int i = 1; i <= 7; i++)
	{
		cin >> x;
		v[i - 1] = x;
	}
	for (int i = 1; i <= n; i++)
	{
		int a = 0;
		for (int j = 1; j <= 7; j++)
		{
			cin >> x;
			for (int k = 0; k <= 6; k++)
			{
				if (x == v[k])
				{
					a++;
					break;
				}
			}
		}
		ans[7 - a]++;
	}
	for (int i = 0; i < 7; i++)
	{
		cout << ans[i];
		if (i != 6)
		{
			cout << " ";
		}
	}
	return 0;
}

