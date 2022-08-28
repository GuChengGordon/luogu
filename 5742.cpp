#include <bits/stdc++.h>
using namespace std;

struct node
{
	int num;
	int score1, score2;
	double score;
}a[1005];
int n;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].num >> a[i].score1 >> a[i].score2;
		a[i].score = 0.7 * a[i].score1 + 0.3 * a[i].score2;
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i].score1 + a[i].score2 > 140 && a[i].score >= 80)
			cout << "Excellent";
		else
			cout << "Not excellent";
		cout << endl;
	}
	return 0;
}

