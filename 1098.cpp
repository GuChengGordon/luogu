#include <bits/stdc++.h>
using namespace std;

string s;
int p1, p2, p3;

int main()
{
	cin >> p1 >> p2 >> p3;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '-' && i != 0 && i != s.size() - 1)
			if (s[i - 1] >= 'a' && s[i - 1] < s[i + 1] && s[i + 1] <= 'z')
			{
				if (p1 == 1)
				{
					if (p3 == 1)
					{
						for (char j = s[i - 1] + 1; j <= s[i + 1] - 1; j++)
							for (int k = 1; k <= p2; k++)
								cout << j;
					}
					else
					{
						for (char j = s[i + 1] - 1; j >= s[i - 1] + 1; j--)
							for (int k = 1; k <= p2; k++)
								cout << j;
					}
				}
				else if (p1 == 2)
				{
					if (p3 == 1)
					{
						for (char j = s[i - 1] - 'a' + 'A' + 1; j <= s[i + 1] - 'a' + 'A' - 1; j++)
							for (int k = 1; k <= p2; k++)
								cout << j;
					}
					else
					{
						for (char j = s[i + 1] - 'a' + 'A' - 1; j >= s[i - 1] - 'a' + 'A' + 1; j--)
							for (int k = 1; k <= p2; k++)
								cout << j;
					}
				}
				else
				{
					for (int j = 1; j <= (int(s[i + 1] - s[i - 1]) - 1) * p2; j++)
						cout << '*';
				}
			}
			else if (s[i - 1] >= '0' && s[i - 1] < s[i + 1] && s[i + 1] <= '9')
			{
				if (p1 == 1 || p1 == 2)
				{
					if (p3 == 1)
					{
						for (char j = s[i - 1] + 1; j <= s[i + 1] - 1; j++)
							for (int k = 1; k <= p2; k++)
								cout << j;
					}
					else
					{
						for (char j = s[i + 1] - 1; j >= s[i - 1] + 1; j--)
							for (int k = 1; k <= p2; k++)
								cout << j;
					}
				}
				else
				{
					for (int j = 1; j <= (s[i + 1] - s[i - 1] - 1) * p2; j++)
						cout << '*';
				}
			}
			else
				cout << '-';
		else
			cout << s[i];
	} 
	return 0;
}

