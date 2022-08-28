#include <bits/stdc++.h>
using namespace std;

struct node
{
	string name;
	int s1, s2;
	bool f1, f2;
	int num;
	int money;
};
int n, s;
node a[105];

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		node t;
		char ch1, ch2;
		cin >> t.name;
		cin >> t.s1 >> t.s2 >> ch1 >> ch2 >> t.num;
		if (ch1 == 'Y')
			t.f1 = 1;
		else
			t.f1 = 0;
		if (ch2 == 'Y')
			t.f2 = 1;
		else
			t.f2 = 0;
		t.money = 0;
		a[i] = t;
	}
	int maxn = 0, t;
	for (int i = 1; i <= n; i++)
	{
		int x = 0;
		if (a[i].s1 > 80 && a[i].num >= 1)
			x += 8000;
		if (a[i].s1 > 85 && a[i].s2 > 80)
			x += 4000;
		if (a[i].s1 > 90)
			x += 2000;
		if (a[i].s1 > 85 && a[i].f2 == 1)
			x += 1000;
		if (a[i].s2 > 80 && a[i].f1 == 1)
			x += 850;
		a[i].money = x;
		if (x > maxn)
		{
			maxn = x;
			t = i;
		}
		s += x;
	}
	cout << a[t].name << endl;
	cout << a[t].money << endl;
	cout << s << endl;
	return 0;
}

