#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a, b, c, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2.0;
	printf("%0.1f", sqrt(p * (p - a) * (p - b) * (p - c)));
	return 0;
}
