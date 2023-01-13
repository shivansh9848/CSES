#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        int m1 = max(a, b);
        int m2 = min(a, b);
        if (m1 <= 2 * m2)
        {
            if (a % 3 == 0 && b % 3 == 0)
                cout << "YES" << endl;
            else if ((a % 3 == 1 && b % 3 == 2) || (a % 3 == 2 && b % 3 == 1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

            continue;
        }
        cout << "NO" << endl;
    }
}
