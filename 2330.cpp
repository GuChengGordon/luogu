#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int n, m;
long long sum;
struct node{
	int x, y, z;
};
vector < node > v;
int fa[5005];
int ans;
int tot;

bool opt(node a, node b)
{
	return (a.z < b.z);
}

int find(int x)
{
	if (fa[x] == x)
		return x;
	fa[x] = find(fa[x]);
	return fa[x];
}

void merge(int x, int y)
{
	fa[find(x)] = find(y);
}

bool judge(int x, int y)
{
	return (find(x) == find(y));
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		node t;
		cin >> t.x >> t.y >> t.z;
		sum += t.z;
		v.push_back(t);
	}

	sort(v.begin(), v.end(), opt);
	for (int i = 1; i <= n; i++)
		fa[i] = i;

	for (int i = 0; i < v.size(); i++)
	{
		if (judge(v[i].x, v[i].y))
			continue;
		merge(v[i].x, v[i].y);
		ans = max(ans, v[i].z);
		tot++;
		int f = find(1);
		bool flag = 1;
		for (int j = 2; j <= n; j++)
			if (find(j) != f)
				flag = 0;
		if (flag)
		{
			cout << tot << " " << ans << endl;
			// system("pause");
			return 0;
		}
	}

	// system("pause");
	return 0;
}