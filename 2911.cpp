#include <bits/stdc++.h>
using namespace std;

int s1, s2, s3, maxn, p;
int a[100];

int main()
{
	cin >> s1 >> s2 >> s3;
	for (int i = 1; i <= s1; i++)
		for (int j = 1; j <= s2; j++)
			for (int k = 1; k <= s3; k++)
				a[i + j + k]++;
	for (int i = 1; i <= 80; i++)
	{
		if (maxn < a[i])
		{
			maxn = a[i];
			p = i;
		}
	}
	cout << p;
	return 0;
}

