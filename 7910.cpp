#include <bits/stdc++.h>
using namespace std;

struct node{
	int num, p;
};

int n, Q, flag, u, v;
node a[8005];
int point[8005];

bool cmp(node a, node b)
{
	if (a.num == b.num)
		return (a.p < b.p);
	return (a.num < b.num);
}

void myprint()
{
	cout << endl;
	for (int i = 1; i <= n; i++)
		cout << a[i].num << " " << a[i].p << endl;
	cout << endl;
	for (int i = 1; i <= n; i++)
		cout << point[i] << " ";
	cout << endl;
}

int main()
{
	scanf("%d%d", &n, &Q);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]), a[i].p = i;
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++)
	{
		point[a[i].p] = i;
	}
//	myprint();
	for (int i = 1; i <= Q; i++)
	{
		scanf("%d", &flag);
		if (flag - 1)
		{
			scanf("%d", &u);
			printf("%d\n", point[u]);
		}
		else
		{
			scanf("%d%d", &u, &v);
			a[point[u]].num = v;
			for (int i = 2; i <= n; i++)
				if (cmp(a[i], a[i - 1]))
				{
					node t = a[i - 1];
					a[i - 1] = a[i];
					a[i] = t;
				}
			for (int i = n; i >= 2; i--)
				if (cmp(a[i], a[i - 1]))
				{
					node t = a[i - 1];
					a[i - 1] = a[i];
					a[i] = t;
				}
			for (int i = 1; i <= n; i++)
				point[a[i].p] = i;
//			myprint();
		}
	}
	return 0;
}