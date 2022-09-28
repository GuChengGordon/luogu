#include <bits/stdc++.h>
using namespace std;

long long a, b, p, tot = 1, ans = 1;

inline long long read()
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
void write(long long x)
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
	a = read();
	b = read();
	p = read();
	write(a);
	putchar('^');
	write(b);
	putchar(' ');
	putchar('m');
	putchar('o');
	putchar('d');
	putchar(' ');
	write(p);
	putchar('=');
	while (b)
	{
		if (b & 1)
			ans = (ans % p * (a % p)) % p;
		a = (a % p * (a % p)) % p;
		b >>= 1;
	}
	write(ans);
	putchar('\n');
 	return 0;
}

