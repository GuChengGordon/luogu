#include <bits/stdc++.h>
using namespace std;

string a[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "a", "both", "another", "first", "second", "third"};
string s;
int b[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 21, 44, 69, 96, 25, 56, 89, 24, 61, 1, 4, 1, 1, 4, 9};
int k[6], p;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> s;
		for (int j = 0; j < 24; j++)
			if (s == a[j])
				k[p++] = b[j];
	}
	if (!p)
	{
		putchar(48);
		return 0;
	}
	sort(k, k + p - 1);
	printf("%d", k[0]);
	for (int i = 1; i < p; i++)
		printf("%02d", k[i]);
	return 0;
}

