#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, n;
	int ans;
	cin >> x >> n;
	for (int i = x; i <= n % 7 + x - 1; i++)
		if (i != 6 && i != 7)
			ans++;
	cout << n / 7 * 5 * 250 + ans * 250;
	return 0;
}
