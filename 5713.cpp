#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, n;
	cin >> n;
	a = 5 * n;
	b = 3 * n + 11;
	if (a < b)
		cout << "Local";
	else
		cout << "Luogu";
	return 0;
}
