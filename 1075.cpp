#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i < sqrt(n); i++)
		if (n % i == 0)
		{
			bool f = true;
			for (int j = 2; j < i; j++)
				if (i % j == 0)
					f = false;
			if (f)
			{
				cout << n / i;
				return 0;
			}
		}
	return 0;
}
