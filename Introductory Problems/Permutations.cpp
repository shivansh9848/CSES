#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    long long arr[n];
    bool flag = 0;
    for (long long i = 1; i <= n / 2; i++)
    {
        if (flag == 0)
        {
            if (n % 2 != 0)
            {
                arr[i - 1] = i;
                arr[n - i] = n - i;
            }
            else
            {

                arr[i - 1] = i;
                arr[n - i] = n + 1 - i;
            }
        }
        else
        {
            if (n % 2 != 0)
            {
                arr[i - 1] = n - i;
                arr[n - i] = i;
            }
            else
            {

                arr[i - 1] = n + 1 - i;
                arr[n - i] = i;
            }
        }

        if (flag == 0)
            flag = 1;
        else
            flag = 0;
    }
    if (n % 2 != 0)
        arr[n / 2] = n;
    else
    {
        int temp1=arr[0];
        arr[0]=arr[n/2-1];
        arr[n/2-1]=temp1;
        int temp2=arr[n-1];
        arr[n-1]=arr[n/2];
        arr[n/2]=temp2;

    }
    for (long long i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
