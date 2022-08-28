#include <bits/stdc++.h>
using namespace std;

int main()
{
	for (int i = 123; i <= 329; i++)
	{
		int a = i, b = i * 2, c = i * 3;
		int x[10];
		x[1] = a / 100;
		x[2] = (a - x[1] * 100) / 10;
		x[3] = a % 10;
		x[4] = b / 100;
		x[5] = (b - x[4] * 100) / 10;
		x[6] = b % 10;
		x[7] = c / 100;
		x[8] = (c - x[7] * 100) / 10;
		x[9] = c % 10;
		if (x[1] * x[2] * x[3] * x[4] * x[5] * x[6] * x[7] * x[8] * x[9] == 362880)
			if (x[1] + x[2] + x[3] + x[4] + x[5] + x[6] + x[7] + x[8] + x[9] == 45)
				cout << a << " " << b << " " << c << endl;
	}
	return 0;
}

