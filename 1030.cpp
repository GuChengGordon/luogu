#include <bits/stdc++.h>
using namespace std;

string s1, s2;

void dg(int lft1, int rgh1, int lft2, int rgh2)
{
	if (lft1 == rgh1)
	{
		cout << s1[lft1];
		return;
	}
	if (lft1 > rgh1)
		return;
	int i;
	for (i = lft1; i <= rgh1; i++)
		if (s1[i] == s2[rgh2])
			break;
	cout << s2[rgh2];
	dg(lft1, i - 1, lft2, lft2 + i - lft1 - 1);
	dg(i + 1, rgh1, lft2 + i - lft1, rgh2 - 1);
	return;
}

int main()
{
	cin >> s1 >> s2;
	dg(0, s1.size() - 1, 0, s2.size() - 1);
	return 0;
}

