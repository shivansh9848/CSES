#include "bits/stdc++.h"
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long row, col;
        cin >> row >> col;
        long long ans = 0;
     
        if (col >= row)
        {
            if (col % 2 != 0)
            {
                ans = col * col;
            }
            else
                ans = (col - 1) * (col - 1) + 1;
            if (ans % 2 == 0)
                ans = ans + (row - 1);
            else
                ans = ans - (row - 1);
        }
        else
        {
            if (row % 2 == 0)
            {
                ans = row * row;
            }
            else
                ans = (row - 1) * (row - 1) + 1;
            if (ans % 2 == 0)
                ans = ans - (col - 1);
            else
                ans = ans + (col - 1);
        }
        cout << ans << endl;
    }
}
