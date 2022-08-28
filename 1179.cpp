#include <bits/stdc++.h>
using namespace std;

int L, R, ans;

int main()
{
	scanf("%d%d", &L, &R);
	for (int i = L; i <= R; i++)
	{
		int x = i;
		while (x > 0)
		{
			if (x % 10 == 2)
				ans++;
			x /= 10;
		}
	}
	printf("%d\n", ans);
	return 0;
}

