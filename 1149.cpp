#include <bits/stdc++.h>
using namespace std;

int arr[2005] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, s[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, n, ans;

int main()
{
	cin >> n;
	for (int i = 10; i <= 2000; i++)
	{
		int x = i;
		while (x >= 1)
		{
			arr[i] += s[x % 10];
			x /= 10;
		}
	}
	for (int i = 0; i <= 1000; i++)
		for (int j = 0; j <= 1000; j++)
			if (arr[i] + arr[j] + arr[i + j] + 4 == n)
				ans++;
	cout << ans;
	return 0;
}

