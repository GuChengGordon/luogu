#include <bits/stdc++.h>
using namespace std;

int n, k, a[15];
long long ans;

int main()
{
	cin >> k >> n;
	int i = 1;
	while (n > 0)
	{
		a[i++] = n % 2;
		n /= 2;
	}
	for (int j = i - 1; j >= 1; j--)
	{
		ans += a[j] * pow(k, j - 1);
	}
	cout << ans;
	return 0;
}

