#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int ans = 1;
    while (n--)
    {
        ans *= 2;
        ans = ans % (1000000007);
    }
    cout << ans % (1000000007) << endl;
}
