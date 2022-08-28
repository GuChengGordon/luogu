#include <bits/stdc++.h>
using namespace std;

const int maxn = 12;
int n;

struct node
{
	int a[maxn][maxn];
	void in()
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				scanf(" %c", a[i] + j);
	}
	node rotate()
	{
		node ans;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				ans.a[i][j] = a[n - j - 1][i];
		return ans;
	}
	node reflex()
	{
		node ans;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				ans.a[i][j] = a[i][n - j - 1];
		return ans;
	}
	bool operator==(node b)
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] != b.a[i][j])
					return false;
		return true;
	}
}from, to, mid;

int main()
{
	scanf("%d", &n);
	from.in();
	to.in();
	mid = from;
	for (int i = 1; i <= 3; i++)
	{
		mid = mid.rotate();
		if (mid == to)
		{
			printf("%d\n", i);
			return 0;
		}
	}
	mid = from.reflex();
	if (mid == to)
	{
		printf("4\n");
		return 0;
	}
	for (int i = 1; i <= 3; i++)
	{
		mid = mid.rotate();
		if (mid == to)
		{
			printf("5\n");
			return 0;
		}
	}
	if (from == to)
	{
		printf("6\n");
		return 0;
	}
	printf("7\n");
	return 0;
}

