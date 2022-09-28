#include <bits/stdc++.h>
using namespace std;

priority_queue < int > q;
int n, x, y;

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
	while (n--)
	{
		x = read();
		if (--x)
			if (--x)
				q.pop();
			else
			{
				write(-q.top());
				putchar('\n');
			}
		else
		{
			y = read();
			q.push(-y);
		}
	}
 	return 0;
}

