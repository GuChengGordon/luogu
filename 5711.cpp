#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a;
	cin >> a;
	cout << (((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));
	return 0;
}
