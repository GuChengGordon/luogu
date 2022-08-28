#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c = 0;
	scanf("%d.%d", &a, &b);
	while (a > 0)
	{
		c *= 10;
		c += a % 10;
		a /= 10;
	}
	printf("%d.%d", b, c);
	return 0;
}
