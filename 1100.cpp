#include <bits/stdc++.h>
using namespace std;

unsigned long long x;

int main()
{
    cin >> x;
    cout << ((x & 0x0000ffff) << 16 | (x & 0xffff0000) >> 16) << endl;
    return 0;
}

