#include <bits/stdc++.h>
using namespace std;

int n;
int a[1005], b[1005];

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 1; i < n; i++)
	{
		int x = abs(a[i] - a[i + 1]);
		if (x < 1 || x >= n)
		{
			printf("Not jolly\n");
			return 0;
		}
		else
		{
			b[x]++;
			if (b[x] > 1)
			{
				printf("Not jolly\n");
				return 0;
			}
		}
	}
	printf("Jolly\n");
	return 0;
}

