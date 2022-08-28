#include <bits/stdc++.h>
using namespace std;

int n;
double D1, D2, C, P, res, ans, maxx;

struct node
{
	double co, dis;
	bool friend operator <(const node& a, const node& b)
	{
		return a.dis < b.dis;
	}
}arr[100000];

int Solve(int now)
{
	int flag = 9999999;
	double d = arr[now].dis; 
	for (int i = now + 1; i <= n && arr[i].dis - d <= maxx; i ++)
	{
		if (arr[i].co < arr[now].co)
		{
			ans += ((arr[i].dis - d - res) / D2) * arr[now].co;
			res = 0;
			return i;
		}
		if (flag == 9999999 || arr[i].co < arr[flag].co)
			flag = i;
	}
	if (D1 - arr[now].dis <= maxx)
	{
		ans += ((D1 - arr[now].dis - res) / D2) * arr[now].co;
		return 9999999;
	}
	if (flag == 9999999)
	{
		printf("No Solution\n");
		return -1;
	}
	else
	{
		ans += C * arr[now].co;
		res += (maxx - (arr[flag].dis - d));
		return flag;
	}
}

int main()
{
	scanf("%lf%lf%lf%lf%d", &D1, &C, &D2, &P, &n);
	arr[0].dis = 0;
	arr[0].co = P;
	for (int i = 1; i <= n; i ++) 
		scanf("%lf%lf", &arr[i].dis, &arr[i].co);
	sort(arr, arr + n + 1);
	maxx = C * D2;
	int k = 0, t;
	do
	{
		t = Solve(k);
		k = t;
		if (t == -1)
			return 0;
	}while(t != 9999999);
	printf("%.2lf", ans);
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

double d1, c, d2, p;
double d[10], p[10];
int n;
struct node{
	double cost, num;
	friend bool operator >(node a, node b)
	{
		return a.cost > b.cost;
	}
	friend bool operator <(node a, node b)
	{
		return a.cost < b.cost;
	}
	friend bool operator ==(node a, node b)
	{
		return a.cost == b.cost;
	}
};
double lastp, nowc, totalcost, nowd;
set < node > s;

int main()
{
	cin >> d1 >> c >> d2 >> p >> n;
	for (int i = 1; i <= n; i++)
		cin >> d[i] >> p[i];
	lastp = p;
	totalcost = c * p;
	nowd = 0;
	s.push({p, c});
	for (int i = 1; i <= n; i++)
	{
		double ss = d[i] - nowd;	
		while (ss > 0)
		{
			if (s.empty())
			{
				cout << "No Solution";
				return 0;
			}
			node t = s.top();
			s.pop();
			if (t.num * d2 > ss)
			{
				t.num -= ss / d2;
				s.push(t);
			}
			else
			{
				ss -= t.num * d2;
			}
		}
		
	}
	return 0;
}
*/
