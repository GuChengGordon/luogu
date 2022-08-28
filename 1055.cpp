#include <bits/stdc++.h>
using namespace std;
int main()
{
	char ch,a[13];
	int p=0,s=0;
	for (int i=1;i<=12;i++)
	{
		cin>>ch;
		a[i-1]=ch;
		if (ch!='-')
		{
			p++;
			s+=p*(int(ch)-48);
		}
	}
	s=s%11;
	if (s==10)
		a[12]='X';
	else
		a[12]=char(s+48);
	cin>>ch;
	if ((s==int(ch)-48)||a[12]==ch)
		cout<<"Right";
	else
		for (int i=0;i<=12;i++)
			cout<<a[i];
	return 0;
}
