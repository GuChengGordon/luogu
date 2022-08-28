#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	int s1, s2;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	s1 = a * 60 + b;
	s2 = c * 60 + d;
	e = (s2 - s1) / 60;
	f = (s2 - s1) % 60;
	printf("%d %d", e, f);
	return 0;
}
