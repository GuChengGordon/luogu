#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;
	if (a <= 150)
		printf("%0.1f", a * 0.4463);
	else
		if (a <= 400)
			printf("%0.1f", a * 0.4663 - 3.0);
		else
			printf("%0.1f", a * 0.5663 - 43.0);
	return 0;
}
