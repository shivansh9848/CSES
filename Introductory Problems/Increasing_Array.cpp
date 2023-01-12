#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    long long c = 0;
    for (long long i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
        
            c += arr[i - 1] - arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout << c << endl;
}
