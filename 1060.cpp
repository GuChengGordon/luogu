#include <bits/stdc++.h>
using namespace std;

int c[30], v[30], arr[30][30000];
int n, m;

int main()
{
//	system("mode con cols=10005 lines=20");
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		cin >> c[i] >> v[i];
//	cout << " ";
//	for (int i = 1; i <= n; i++)
//		cout << setw(10) << i;
//	cout << endl;
	for (int i = 1; i <= m; i++)
	{
//		cout << i;
		for (int j = 1; j <= n; j++)
		{
			if (j < c[i])
			{
				arr[i][j] = arr[i - 1][j];
//				cout << setw(5) << arr[i - 1][j] << setw(5) << arr[i][j];
			}
			else
			{
				arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - c[i]] + c[i] * v[i]);
//				cout << setw(5) << arr[i - 1][j] << setw(5) << arr[i - 1][j - c[i]] + c[i] * v[i];
			}
		}
//		cout << endl;
	}
	cout << arr[m][n];
	return 0;
}

/*
10 5
8 2
4 5
3 5
4 3
2 2
*/

