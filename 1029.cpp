#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int m, n, ans, flag;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= sqrt(1ll * m * n); i++)
    {
        if ((1ll * n * m) % i == 0 && __gcd((long long)i, (1ll * n * m) / i) == n)
        {
            ans++;
            if (1ll * i * i == 1ll * n * m)
				flag = 1;
        }
    }
    cout << ans * 2 - flag;
    return 0;
}
