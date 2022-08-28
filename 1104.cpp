#include <bits/stdc++.h>
using namespace std;

struct node{
	int num, y, m, d;
	string name;
}a[105];

int n, x, b, c;
string s;

bool cmp(node a, node b)
{
	if (a.y == b.y)
		if (a.m == b.m)
			if (a.d == b.d)
				return a.num > b.num;
			else
				return a.d < b.d;
		else
			return a.m < b.m;
	else
		return a.y < b.y;
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		cin >> x >> b >> c;
		a[i] = {i, x, b, c, s};
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++)
		cout << a[i].name << endl;
	return 0;
}

