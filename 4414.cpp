#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	char ch;
	for (int i = 0; i < 3; i++)
	{
		ch = getchar();
		while (ch < 'A' || ch > 'C')
		{
			ch = getchar();
		}
		switch (ch)
		{
			case 'A':
				cout << a[0];
				break;
			case 'B':
				cout << a[1];
				break;
			case 'C':
				cout << a[2];
				break;
		}
		if (i != 2)
			cout << ' ';
	}
	return 0;
}
