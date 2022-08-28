#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int m, s, t;
int s1, s2, p;

int main()
{
	cin >> m >> s >> t;
	p = t;
	while (s1 < s && p)
	{
		s1 += 17;
		if (m >= 10)
			s2 += 60, m -= 10;
		else
			m += 4;
		s1 = max(s1, s2);
		p--;
	}
	if (s1 >= s)
		cout << "Yes" << endl << t - p << endl;
	else
		cout << "No" << endl << s1 << endl;
// 	system("pause");
	return 0;
}
