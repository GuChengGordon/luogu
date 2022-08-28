#include <bits/stdc++.h>
using namespace std;

int n;
string str;

void dg(string s)
{
	bool I = true, B = true;
	for (int i = 0; i < s.size(); i++)
		if (s[i] == '1')
			B = false;
		else
			I = false;
	if (s.size() > 1)
	{
		string lft = "", rgh = "";
		for (int i = 0; i < s.size() / 2; i++)
			lft += s[i];
		for (int i = s.size() / 2; i < s.size(); i++)
			rgh += s[i];
		dg(lft);
		dg(rgh);
	}
	if (B == true)
		cout << 'B';
	else
		if (I == true)
			cout << 'I';
		else
			cout << 'F';
}

int main()
{
	cin >> n;
	cin >> str;
	dg(str);
	return 0;
}

