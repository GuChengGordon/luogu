#include <bits/stdc++.h>
using namespace std;
int main()
{
	double p = 0;
	int n, i;
	cin >> n;
	for (i = 1; p <= n; i++)
		p += 1.0 / i;
	cout << i - 1;
	return 0;
}
