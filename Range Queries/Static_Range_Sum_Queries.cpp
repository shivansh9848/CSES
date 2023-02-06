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
        if (i != 0)
            arr[i] += arr[i-1];
    }
    while (m--)
    {
        ll a, b;
        cin >> a >> b;
        if (a >= 2)
            cout << arr[b - 1] - arr[a - 2] << endl;
        else
            cout << arr[b - 1] << endl;
    }
}
