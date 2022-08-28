#include <bits/stdc++.h>
using namespace std;

int num[30], maxn;
char ch;

int main()
{
	while (cin >> ch)
	{
		if (ch >= 'A' && ch <= 'Z')
			num[ch - 'A']++;
	}
	for (int i = 0; i < 26; i++)
		maxn = max(num[i], maxn);
	for (int i = maxn; i >= 1; i--)
	{
		for (int j = 0; j < 26; j++)
		{
			if (j > 0)
				cout << ' ';
			if (num[j] >= i)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
	cout << 'A';
	for (int i = 1; i < 26; i++)
		cout << " " << char('A' + i);
	return 0;
}

