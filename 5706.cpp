#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double t;
	cin >> t >> n;
	t /= n * 1.0;
	n *= 2;
	printf("%0.3f\n%d", t, n);
	return 0;
}
