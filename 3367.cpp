#include <bits/stdc++.h>
using namespace std;

int n, m, p;
int fa[5005];
int x, y;

int func(int x)
{
    if (fa[x] == x)
        return x;
    fa[x] = func(fa[x]);
    return fa[x];
}

void join(int x, int y)
{
    fa[func(x)] = func(y);
}

bool find(int x, int y)
{
    if (func(fa[x]) == func(fa[y])) return 1;
    return 0;
}

int main()
{
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        join(x, y);
    }
    for (int i = 1; i <= p; i++)
    {
        cin >> x >> y;
        if (find(x, y))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}