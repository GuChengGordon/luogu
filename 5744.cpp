#include <bits/stdc++.h>
using namespace std;

struct node
{
	string name;
	int age, score;
}a[100005];
int n;

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i].name >> a[i].age >> a[i].score;
	for (int i = 1; i <= n; i++)
		cout << a[i].name << " " << a[i].age + 1 << " " << min(int(a[i].score * 1.2), 600) << endl;
	return 0;
}

