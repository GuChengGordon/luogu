#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, s, t;
	cin >> m >> t >> s;
	if (m * t != s)
		cout << (m * t - s) / t;
	else
		cout << 0;
	return 0;
}
