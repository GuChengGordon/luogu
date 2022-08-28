#include<bits/stdc++.h>
using namespace std;

map <int,int> a;
set <int> b;

int main()
{
    int n, q;
    cin >> n;
    for (int i = 1; i <= n; i++)
	{
        scanf("%d", &q);
        a[q]++;
        b.insert(q);
    }
    for (set<int>::iterator it = b.begin(); it != b.end(); it++)
        printf("%d %d\n", *it, a[*it]);
}

