#include <bits/stdc++.h>
using namespace std;

int n, m;
int fa[2005];
char opt;
int x, y;
int ans = 0;

int func(int x)
{
    if (fa[x] == x)
        return x;
    fa[x] = func(fa[x]);
    return fa[x];
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n * 2; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        cin >> opt >> x >> y;
        if (opt == 'F')
            fa[func(x)] = func(y);
        else	
        {
            fa[func(x + n)] = func(y);
            fa[func(n + y)] = func(x);
        }
    }
    for (int i = 1; i <= n; i++)
        if (fa[i] == i)
            ans++;
    cout << ans << endl;
    return 0;
}