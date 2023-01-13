#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = (n * (n + 1)) / 2;
    if (x % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
}
