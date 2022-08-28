#include <bits/stdc++.h>
using namespace std;

int n;
char ch;
string s[100];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string st;
		stringstream io;
		int a, b, ans = 0;
		if (!(cin >> a))
		{
			cin.clear();
			cin >> ch >> a;
		}
		cin >> b;
		io << a;
		io >> s[i];
		io.clear();
		if (ch == 'a')
		{
			ans = a + b;
			s[i] += '+';
			io << b;
			io >> st;
			io.clear();
			s[i] += st;
			s[i] += '=';
			io << ans;
			io >> st;
			io.clear();
			s[i] += st;
		}
		if (ch == 'b')
		{
			ans = a - b;
			s[i] += '-';
			io << b;
			io >> st;
			io.clear();
			s[i] += st;
			s[i] += '=';
			io << ans;
			io >> st;
			io.clear();
			s[i] += st;
		}
		if (ch == 'c')
		{
			ans = a * b;
			s[i] += '*';
			io << b;
			io >> st;
			io.clear();
			s[i] += st;
			s[i] += '=';
			io << ans;
			io >> st;
			io.clear();
			s[i] += st;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << s[i] << endl;
		cout << s[i].size();
		if (i != n - 1)
			cout << endl;
	}
	return 0;
}

