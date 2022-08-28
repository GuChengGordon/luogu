#include<iostream>
using namespace std;
long long maxn,minn; 
long long gcd(long long,long long);  
int main()
{  
	long long a,b,c;
	cin>>a>>b>>c;
	minn=a;
	if(b<minn) minn=b;
	if(c<minn) minn=c;
	maxn=a;
	if(b>maxn) maxn=b;
	if(c>maxn) maxn=c;
	cout<<gcd(minn,maxn)<<"/"<<gcd(maxn,minn);
	return 0;
}

long long gcd(long long a,long long b)
{
	int yue;
	for(int i=a;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			yue=i;
			break;
		}
	}
	return a/yue;
}
