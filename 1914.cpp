#include <bits/stdc++.h>
using namespace std;

char str[100], ch;
int n;

int main()
{
	cin >> n;
	int i = 1;
	while (cin >> ch)
	{
		ch = 'a' + (ch - 'a' + n) % 26;
		str[i] = ch;
		i++;
	}
	for (int j = 1; j < i; j++)
		cout << str[j];
	return 0;
}

