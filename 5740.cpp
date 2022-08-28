#include <bits/stdc++.h>
using namespace std;

struct node
{
	string s;
	int a, b, c, n;
}A[1005];
int N;

bool cmp(node x, node y)
{
	if (x.a + x.b + x.c == y.a + y.b + y.c)
		return x.n < y.n;
	else
		return x.a + x.b + x.c > y.a + y.b + y.c;
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A[i].s >> A[i].a >> A[i].b >> A[i].c;
		A[i].n = i;
	}
	sort(A + 1, A + N + 1, cmp);
	cout << A[1].s << " " << A[1].a << " " << A[1].b << " " << A[1].c;
	return 0;
}

