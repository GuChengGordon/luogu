#include <bits/stdc++.h>
using namespace std;
int main()
{
	int y, m, d;
	cin >> y >> m;
	switch (m)
	{
		case 4:
			d = 30;
			break;
		case 6:
			d = 30;
			break;
		case 9:
			d = 30;
			break;
		case 11:
			d = 30;
			break;
		case 2:
			if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
				d = 29;
			else 
				d = 28;
			break;
		default:
			d = 31;
			break;
	}
	cout << d;
	return 0;
}
