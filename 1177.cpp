#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    int n,i,k;
    cin>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    sort(a,a+n+1);
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
   return 0;
}