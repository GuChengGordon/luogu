#include <bits/stdc++.h>
using namespace std;

char str[105];
int n, p, ans;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		char ch;
		cin >> ch;
		str[i] = (ch == 'V' ? '1' : '0');
	}
	for (int i = 0; i <= n; i++)
	{
		p = 0;
		str[i] = (str[i] - '0') ^ 1 + '0';
		for (int j = 2; j <= n; j++)
			if (str[j - 1] == '1' && str[j] == '0')
				p++;
		ans = max(ans, p);
		str[i] = (str[i] - '0') ^ 1 + '0';
	}
	cout << ans;
	return 0;
}

