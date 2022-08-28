#include <bits/stdc++.h>
using namespace std;

char str[105], ch; 

int main()
{
	int i = 1;
	while (cin >> ch)
	{
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 'a' + 'A';
		str[i] = ch;
		i++;
	}
	for (int j = 1; j <= i - 1; j++)
		cout << str[j];
	return 0;
}

