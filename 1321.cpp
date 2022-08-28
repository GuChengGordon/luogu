#include <bits/stdc++.h>
using namespace std;

string s;
int n, p1, p2;

int main()
{
	cin >> s;
	n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'b')
			p1++;
		if (s[i] == 'o' && s[i - 1] != 'b')
			p1++;
		if (s[i] == 'y' && s[i - 2] != 'b' && s[i - 1] != 'o')
			p1++;
		if (s[i] == 'g')
			p2++;
		if (s[i] == 'i' && s[i - 1] != 'g')
			p2++;
		if (s[i] == 'r' && s[i - 2] != 'g' && s[i - 1] != 'i')
			p2++;
		if (s[i] == 'l' && s[i - 3] != 'g' && s[i - 2] != 'i' && s[i - 1] != 'r')
			p2++;
	}
	cout << p1 << endl << p2;
	return 0;
}

