#include <bits/stdc++.h>
using namespace std;

int n, r, a[101];

void dfs(int step)
{
	if (step >= r)
	{
		for (int i = 1; i <= r; i++)
			cout << setw(3) << a[i];
		cout << endl;
		return;
	}
	for (int i = a[step] + 1; i <= n + step + 1 - r; i++)
	{
		a[step + 1] = i;
		dfs(step + 1);
	}
}

int main()
{
	cin >> n >> r;
	for (int i = 1; i <= n + 1 - r; i++)
	{
		a[1] = i;
		dfs(1);
	}
	return 0;
}

