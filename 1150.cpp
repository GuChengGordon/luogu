#include <bits/stdc++.h>
using namespace std;

int k, n;

int main()
{
	cin >> n >> k;
	cout << n + (n - 1) / (k - 1);
	return 0;
}

