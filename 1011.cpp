#include <cstdio>
using namespace std;
int a, n, m, x, u=1, z, y;
int main()
{
    scanf("%d %d %d %d", &a, &n, &m, &x);
    if(n <= 5) {
        if(n == 2||n == 3)
            printf("%d", a);
        else if(n == 4) {
            if(x == 1 || x == 2) printf("%d", a);
            else if(x == 3) printf("%d", a * 2);
        }
        else if(n == 5) {
            if(x == 1 || x == 2) printf("%d", a);
            else if(x == 3) printf("%d", a * 2);
            else if(x == 4)
                printf("%d", (m - a * 3) / 2 + a * 2);
        }
    }
    else {
        int p = 1, q = 0, k = 0, sum1 = 0;
        for(int i = 1; i <= n - 5; i++) {
            k = p + q;
            sum1 += k;
            p = q;
            q = k;
        }
        int s1 = sum1 + 2;
        int e = 0, t = 1, g = 0,sum2 = 0;
        for(int i = 1; i <= n - 5; i++) {
            g = e + t;
            sum2 += g;
            e = t;
            t = g;
        }
        int s2 = sum2 + 1;
        int S = (m - s1 * a) / s2;
        q = k = e = g = sum1 = sum2 = 0;
        p = t = 1;
        if(x <= 5) {
            if(x == 1 || x == 2) printf("%d", a);
            else if(x == 3)  printf("%d", a * 2);
            else if(x == 4) printf("%d", S + a * 2);
            else printf("%d", S * 2 + a * 3);
        }
        else {
            for(int i = 1; i <= x - 4; i++) {
                k = p + q;
                sum1 += k;
                p = q;
                q = k;
            }
            sum1 += 2;
            for(int i = 1; i <= x - 4; i++) {
                g = e + t;
                sum2 += g;
                e = t;
                t = g;
            }
            sum2 += 1;
            printf("%d", sum1 * a + sum2 * S);
        }
    }
    return 0;
}
