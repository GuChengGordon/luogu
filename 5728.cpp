#include <bits/stdc++.h>
using namespace std;

struct node
{
	short a, b, c;
};
int n, ans;
int ca, cb, cc;
vector < node > v;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> ca >> cb >> cc;
		v.push_back({ca, cb, cc});
	}
	for (int i = 1; i < n; i++)
		for (int j = i + 1; j <= n; j++)
			if (abs(v[i - 1].a - v[j - 1].a) <= 5)
				if (abs(v[i - 1].b - v[j - 1].b) <= 5)
					if (abs(v[i - 1].c - v[j - 1].c) <= 5)
						if (abs(v[i - 1].a - v[j - 1].a + v[i - 1].b - v[j - 1].b + v[i - 1].c - v[j - 1].c) <= 10)
							ans++;
	cout << ans;
	return 0;
}

