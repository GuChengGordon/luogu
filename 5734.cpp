#include <bits/stdc++.h> 
using namespace std;

int n, a;
string qwq;
string str2;
string str1;
int b, c, d = -1, e;

int main()
{
	cin >> n;
	cin >> qwq;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			cin >> str1;
			qwq += str1;
			cout << qwq << endl;
		}
		else if (a == 2)
		{
			cin >> b >> c;
			str2 = qwq.substr(b, c);
			qwq = str2;
			cout << qwq;
			cout << endl;
		}
		else if (a == 3)
		{
			cin >> b >> str1;
			qwq.insert(b, str1);
			cout << qwq << endl;
		}
		else if (a == 4)
		{
			cin >> str1;
			if (qwq.find(str1) < qwq.size())
				cout << qwq.find(str1) << endl;
			else
				cout << -1 << endl;
		}
	}
    return 0;
}

