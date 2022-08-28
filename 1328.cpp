#include <bits/stdc++.h>
using namespace std;

int n, n1, n2, ans1, ans2;
int a1[205], a2[205];
int a[5][5] = {0, -1, 1, 1, -1, 1, 0, -1, 1, -1, -1, 1, 0, -1, 1, -1, -1, 1, 0, 1, 1, 1, -1, -1, 0};

int main()
{
	cin >> n >> n1 >> n2;
	for (int i = 1; i <= n1; i++)
		cin >> a1[i];
	for (int i = 1; i <= n2; i++)
		cin >> a2[i];
	for (int i = 1; i <= n; i++)
	{
		int x = (i - 1) % n1 + 1, y = (i - 1) % n2 + 1;
		if (a[a1[x]][a2[y]] == 1)
			ans1++;
		if (a[a1[x]][a2[y]] == -1)
			ans2++;
	}
	cout << ans1 << " " << ans2;
	return 0;
}

