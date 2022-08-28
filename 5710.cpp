#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int ans;
	cin >> n;
	ans = (n % 2 == 0) + (n > 4 && n <= 12);
	cout << (ans == 2) << ' ' << (ans >= 1) << ' ' << (ans == 1) << ' ' << (ans == 0);
	return 0;
}
