#include <bits/stdc++.h>
using namespace std;

int n, q, x;
vector < int > v;
int f[100000001];

inline int read()
{
	int x = 0, f = 1;
	char ch;
	ch = getchar();
	while (!isdigit(ch) && ch != '-')
	{
		ch = getchar();
	}
	if (ch == '-')
		f = -1, ch = getchar();
	while (isdigit(ch))
	{
		x = x * 10 + ch - '0';
		ch = getchar();
	}
	return x * f;
}
void write(int x)
{
	if (x < 0)
	{
		putchar('-');
		write(-x);
		return;
	}
	if (x < 10)
	{
		putchar(x + '0');
		return;
	}
	write(x / 10);
	putchar(x % 10 + '0');
}

int main()
{
	n = read();
	q = read();
	f[0] = 1;
	f[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (!f[i])
		{
			f[i] = i;
			v.push_back(i);
		}
		for (int j = 0; j < v.size(); j++)
			if (v[j] > f[i] || v[j] > n / i)
				break;
			else
				f[i * v[j]] = f[i];
	}
		
	while (q--)
	{
		x = read();
		write(v[x - 1]);
		putchar('\n');
	}
 	return 0;
}

