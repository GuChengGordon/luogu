#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, maxn = 0, ans = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> a >> b;
		if (a + b > 8 && a + b > maxn)
		{
			maxn = a + b;
			ans = i + 1;
		}
	}
	cout << ans;
	return 0;
}
