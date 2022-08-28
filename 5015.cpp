#include <bits/stdc++.h>
using namespace std;

char ch, str[100];
int ans;

int main()
{
	while (cin >> ch)
	{
		if (ch != ' ' && ch != '\n')
			ans++;
	}
	cout << ans;
	return 0;
}

