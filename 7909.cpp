#include <bits/stdc++.h>
using namespace std;

int n, l, r;

int main()
{
	cin >> n >> l >> r;
	if (r - l >= n || l / n != r / n)
	{
		cout << n - 1;
		return 0;
	}
	if (l / n == r / n)
	{
		cout << r % n;
		return 0;
	}
	return 0;
}