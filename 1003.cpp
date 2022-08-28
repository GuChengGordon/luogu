#include <bits/stdc++.h>
using namespace std;
int a[10000][10000];
struct node
{
	vector < int > a;
	vector < int > b;
	vector < int > j;
	vector < int > k;
}v;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int a, b, j, k;
		cin >> a >> b >> j >> k;
		v.a.push_back(a);
		v.b.push_back(b);
		v.j.push_back(j);
		v.k.push_back(k);
	}
	int x, y;
	cin >> x >> y;
	for (int i = n - 1; i >= 0; i--)
		if (x >= v.a[i] && x <= v.a[i] + v.j[i] && y >= v.b[i] && y <= v.b[i] + v.k[i])
		{
			cout << i + 1;
			return 0;
		}
	cout << -1;
	return 0;
}
