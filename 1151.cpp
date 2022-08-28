#include <bits/stdc++.h>
using namespace std;

int k, sub1, sub2, sub3;
bool f = false;

int main()
{
	cin >> k;
	for (int i = 10000; i <= 30000; i++)
	{
		sub1 = i / 100;
		sub2 = (i - i / 10000 * 10000) / 10;
		sub3 = i % 1000;
		if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0)
		{
			cout << i << endl;
			f = true;
		}
	}
	if (!f)
		cout << "No";
	return 0;
}

