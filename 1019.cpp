#include <bits/stdc++.h>
using namespace std;

string str[25];
int yc[25][25];
string a;
char ch;
int n, maxn, ans = -1, vis[25];

int mt(int x, int y)
{
    bool pp = true; 
    int ky = 0;
    for (int k = str[x].size() - 1; k >= 0; k--)
	{
        for (int kx = k; kx < str[x].size(); kx++)
		{
            if (str[x][kx] != str[y][ky++])
			{
                pp = false;
                break;
            }
        }
        if (pp == true)
		{
            return str[x].size()-k;
		}
        ky = 0;
        pp = true;
    }
    return 0;
}

void dfs(int p)
{
    bool jx = false; 
    for (int j = 1; j <= n; j++)
	{
        if (vis[j] >= 2)
			continue;
        if (yc[p][j] == 0)
			continue; 
        if (yc[p][j] == str[p].size() || yc[p][j] == str[j].size())
			continue;
        maxn += str[j].size() - yc[p][j];
        vis[j]++;
        jx = true;
        dfs(j);
        maxn -= str[j].size() - yc[p][j];
        vis[j]--; 
    }
    if (jx == false)
	{
        ans = max(ans, maxn);
    }
    return;
}

int main()
{
	scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        cin >> str[i];
    cin >> ch;
    for (int i = 1; i <= n; i++)
	{
        for (int j = 1; j <= n; j++)
		{
            yc[i][j] = mt(i, j); 
        }
    }
	for (int i = 1; i <= n; i++)
		if (str[i][0] == ch)
		{
			vis[i]++;
            maxn = str[i].size();
            dfs(i);
            vis[i] = 0;
		}
	printf("%d", ans);
	return 0;
}

