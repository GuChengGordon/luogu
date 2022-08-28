#include <bits/stdc++.h>
using namespace std;

struct node
{
	int n1, n2;
};
char ch;
int a, b, c, d;
vector < node > v1, v2;

int main()
{
	while (1)
	{
		cin >> ch;
		if (ch == 'E')
		{
			v1.push_back({a, b});
			v2.push_back({c, d});
			break;
		}
		if (ch == 'W')
		{
			a++;
			c++;
			if (a >= 11 && a - b >= 2)
			{
				v1.push_back({a, b});
				a = 0;
				b = 0;
			}
			if (c >= 21 && c - d >= 2)
			{
				v2.push_back({c, d});
				c = 0;
				d = 0;
			}
		}
		if (ch == 'L')
		{
			b++;
			d++;
			if (b >= 11 && b - a >= 2)
			{
				v1.push_back({a, b});
				a = 0;
				b = 0;
			}
			if (d >= 21 && d - c >= 2)
			{
				v2.push_back({c, d});
				c = 0;
				d = 0;
			}
		}
	}
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i].n1 << ':' << v1[i].n2 << endl;
	cout << endl;
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i].n1 << ':' << v2[i].n2 << endl;
	return 0;
}

