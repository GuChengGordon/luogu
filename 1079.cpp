#include <bits/stdc++.h>
using namespace std;

string k, m, c;
int lk, lc;
int arr[27][27];

int main()
{
	cin >> k >> c;
	lk = k.size();
	lc = c.size();
	for (int i = 1; i <= 26; i++)
		for (int j = 1; j <= 26; j++)
			arr[i][j] = (i + j - 2) % 26 + 1;
	for (int i = 0, j = 0; j < lc; j++, i = (i + 1) % lk)
	{
		int a, b;
		bool f = true;
		if (int(k[i] - 'a' + 1) >= 1 && int(k[i] - 'a' + 1) <= 26)
			a = k[i] - 'a' + 1;
		else
			a = k[i] - 'A' + 1;
		if (int(c[j] - 'a' + 1) >= 1 && int(c[j] - 'a' + 1) <= 26)
			b = c[j] - 'a' + 1;
		else
		{
			b = c[j] - 'A' + 1;
			f = false;
		}
		for (int x = 1; x <= 26; x++)
			if (arr[a][x] == b)
				if (f == true)
					cout << char('a' + x - 1);
				else
					cout << char('A' + x - 1);
	}
	return 0;
}

