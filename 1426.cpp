#include <bits/stdc++.h>
using namespace std;

double s, x, a = 0; 
int i;

int main()
{
	cin >> s >> x;
	i = 0;
	while (a < s - x)
	{
		a += 7 * pow(0.98, i);
		i++;
	}
	a += 7 * pow(0.98, i);
	if (a > s + x)
		cout << 'n';
	else
		cout << 'y'; 
	return 0;
}

