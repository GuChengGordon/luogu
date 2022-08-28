#include <bits/stdc++.h>
using namespace std;

int a, b, c, p, x, y;
char ch, str[300];

int main()
{
	while (cin >> ch)
	{
		if (ch != ':' && ch != '=' && ch != ';')
		{
			p++;
			if (p % 2 == 1)
				x = ch - 'a';
			else
			{
				if (ch >= '0' && ch <= '9')
					y = ch - '0';
				else
					if (ch == 'a')
						y = a;
					else
						if (ch == 'b')
							y = b;
						else
							y = c;
				if (x == 0)
					a = y;
				if (x == 1)
					b = y;
				if (x == 2)
					c = y;
			}
		}
	}
	cout << a << " " << b << " " << c;
	return 0;
}

