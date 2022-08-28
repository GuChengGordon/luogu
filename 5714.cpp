#include <bits/stdc++.h>
using namespace std;
int main()
{
	double m, h, ans;
	cin >> m >> h;
	ans = m / h / h * 1.0;
	if (ans < 18.5)
		cout << "Underweight";
	else
		if (ans < 24.0)
			cout << "Normal";
		else
			cout << ans << endl << "Overweight";
	return 0;
}
