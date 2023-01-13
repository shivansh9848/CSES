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
    vector<int> arr;
    vector<int> brr;
    if (n % 4 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 4 == 0 || i % 4 == 3)
                arr.push_back(i + 1);
            else
                brr.push_back(i + 1);
        }
    }
    if (n % 4 == 3)
    {
        for (int i = 3; i < n; i++)
        {
            if ((i + 1) % 4 == 0 || (i + 1) % 4 == 3)
                arr.push_back(i + 1);
            else
                brr.push_back(i + 1);
        }
        brr.push_back(1);
        brr.push_back(2);
        arr.push_back(3);
    }
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << brr.size() << endl;
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
}
