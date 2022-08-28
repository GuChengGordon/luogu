#include <bits/stdc++.h>
using namespace std;

priority_queue < int, vector < int >, greater < int > > q;
int n;
long long ans;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		q.push(x);
	}
	while (q.size() > 1)
	{
		int a = q.top(), b;
		q.pop();
		b = q.top();
		q.pop();
		ans += a + b;
		q.push(a + b);
	}
	cout << ans;
	return 0;
}

