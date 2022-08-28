#include <bits/stdc++.h>
using namespace std;

int n, k, a[30005];

int main()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		a[x]++;
	}
	int i = -1;
	while (k > 0)
	{
		i++;
		if (a[i] > 0)
			k--;
		if (i == 30001)
			break;
	}
	if (k == 0)
		cout << i << endl;
	else
		cout << "NO RESULT" << endl;
	return 0;
}

