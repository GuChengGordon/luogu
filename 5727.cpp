#include <bits/stdc++.h>
using namespace std;

int n;
vector < int > v;

int main()
{
	cin >> n;
	v.push_back(n);
	while (n > 1)
	{
		if (n % 2 == 1)
		{
			n = n * 3 + 1;
		}
		else
		{
			n = n / 2;
		}
		v.push_back(n);
	}
	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i];
		if (i != 0)
			cout << " ";
	}
	return 0;
}

