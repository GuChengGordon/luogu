#include <bits/stdc++.h>
using namespace std;

string str[20];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> str[i];
	for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(str[j] + str[i] > str[i] + str[j])
            {
                swap(str[j], str[i]);
                
            }
        }
    }
	for (int i = 0; i < n; i++)
		cout << str[i];
	return 0;
}
