#include <bits/stdc++.h>
using namespace std;

string s;
int a, b, c, d, i;

int main()
{
	cin >> s;
	for (i = 0; s[i] != '/'; i++)
		a = a * 10 + s[i] - '0';
	for (i++; i < s.size(); i++)
		b = b * 10 + s[i] - '0';
	cin >> s;
	for (i = 0; s[i] != '/'; i++)
		c = c * 10 + s[i] - '0';
	for (i++; i < s.size(); i++)
		d = d * 10 + s[i] - '0';
	a = a * c;
	b = b * d;
	i = __gcd(a, b);
	a = a / i;
	b = b / i;
	cout << b << " " << a;
	return 0;
}

