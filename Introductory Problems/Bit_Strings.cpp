#include "bits/stdc++.h"
using namespace std;
#define MOD 1000000007 
int main()
{
    long long n;
    cin >> n;
    int ans = 1;
    while (n--)
    {
        ans *= 2;
        ans = ans % MOD;
    }
    cout << ans % MOD << endl;
}
