#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        ll mn = INT_MAX;
        for (ll i = a; i <= b; i++)
        {
            mn = min(mn, arr[i]);
        }
        cout << mn << endl;
    }
}
