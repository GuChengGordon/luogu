#include <bits/stdc++.h>
using namespace std; 

int n, k, cnt;

void dfs(int last, int sum, int cur)
{
    if (cur == k)
    {
        if (sum == n)
			cnt++;
        return;
    }
    
	for (int i = last; sum + i * (k - cur) <= n; i++)
        dfs(i, sum + i, cur + 1);
    
}

int main()
{
    scanf("%d%d", &n, &k);
    dfs(1, 0, 0);
    printf("%d", cnt);
}

/*
#include <bits/stdc++.h>
using namespace std;

int n, k;
int dp[10][205];

int main()
{
	cin >> n >> k;
	dp[1][1] = 1;
	for (int i = 1; i <= k; i++)
		for (int j = i; j <= n; j++)
			if (i == j)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i][j - i];
	cout << dp[k][n];
	return 0;
}

*/
