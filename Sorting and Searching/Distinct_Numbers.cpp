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
    sort(arr, arr + n);
    long long c = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            c++;
    }
    cout << c + 1 << endl;
}
