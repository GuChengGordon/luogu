#include <bits/stdc++.h>
using namespace std;

int n, m, x, a = 1;
string s;
stack < int > q;

int func(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else
		return ch - 'A' + 10;
}

char func(int x)
{
	if (x < 10)
		return char('0' + x);
	else
		return char('A' + x - 10);
}

int main()
{
	cin >> n;
	cin >> s;
	cin >> m;
	for (int i = 0; i < s.size(); i++)
	{
		x += a * func(s[s.size() - i - 1]);
		a *= n;
	}
	while (x > 0)
	{
		q.push(x % m);
		x /= m;
	}
	while (!q.empty())
	{
		cout << func(q.top());
		q.pop();
	}
	return 0;
}

