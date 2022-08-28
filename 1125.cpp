#include <bits/stdc++.h>
using namespace std;

string s;
int l, maxn = 0, minn = 100;
int sum[26];
bool zs[101] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0};

int main()
{
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		sum[s[i] - 'a']++;
	for (int i = 0; i < 26; i++)
	{
		maxn = max(maxn, sum[i]);
		if (sum[i] > 0)
			minn = min(minn, sum[i]);
	}
	if (zs[maxn - minn] == 1)
	{
		cout << "Lucky Word" << endl;
		cout << maxn - minn;
	}
	else
	{
		cout << "No Answer" << endl;
		cout << 0;
	}
	return 0;
}

