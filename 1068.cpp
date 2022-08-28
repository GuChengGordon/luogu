#include <bits/stdc++.h>
using namespace std;

struct node{
	int k, s;
};
int n, m;
node a[10000];

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].k >> a[i].s;
	}
	for (int i = 1; i < n; i++)
		for (int j = 1; j <= n - i; j++)
			if (a[j].s < a[j + 1].s)
			{
				node t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
			else
				if (a[j].s == a[j + 1].s)
					if (a[j].k > a[j + 1].k)
					{
						node t;
						t = a[j];
						a[j] = a[j + 1];
						a[j + 1] = t;
					}
	m = m * 1.5;
	node t = a[m];
	int i = m + 1;
	while (a[i].s == t.s)
	{
		i++;
	}
	i--;
	cout << t.s << " " << i << endl;
	for (int j = 1; j <= i; j++)
		cout << a[j].k << " " << a[j].s << endl;
	return 0;
}

