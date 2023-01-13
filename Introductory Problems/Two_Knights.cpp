#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long c = 0, ans1 = 0;
    for (long long i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << 0 << endl;
            continue;
        }
        long long ans = ((i * i) * ((i * i) - 1)) / 2;
        c = (i - 2) * 8;
        ans1 = ans1 + c;
        cout << ans - ans1 << endl;
    }
}
