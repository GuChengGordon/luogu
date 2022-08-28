#include <bits/stdc++.h>
using namespace std;

const int N = 30;
int mp[N][N];
int n, m, k;
int t;
int fx, fy, ex, ey;
int pn;
int ans;

struct node
{
    int x,y,sum;
}stu[N*N];

bool comp(struct node a,struct node b)
{
    return a.sum > b.sum;
}

int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] > 0)
            {
                stu[++pn].sum = mp[i][j];
                stu[pn].x = i;
                stu[pn].y = j;
            }
        }
    }
    sort(stu + 1, stu + pn + 1, comp);
	fx = 1;
	fy = stu[1].y;
	k--;
    for (int i = 1; i <= pn; i++)
    {
        t = 0;
        ex = stu[i].x;
        ey = stu[i].y;
        t = abs(fx - ex) + abs(fy - ey);
        k--;
        k -= t;
        if (k >= ex)
        {
            ans += mp[ex][ey];
            fx = ex;
            fy = ey;
        }
        else
        {
            cout << ans << endl;
            return 0;
        }
    }
    cout << ans;
    return 0;
}


