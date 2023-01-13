#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string ans =s;
        long long x = 0;
    if (s.length() % 2 == 0)
    {
        for (long long i = 0; i < s.length(); i += 2)
        {
            if (s[i] == s[i + 1])
            {
                ans[x] = s[i];
                ans[s.length() - x - 1] = s[i];
                x++;
                if (x == s.length() / 2)
                {
                    break;
                }
            }
            else
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }
    else
    {
        long long x2 = 0;
        for (long long i = 0; i < s.length();i++)
        {
            if (s[i] == s[i + 1])
            {
                ans[x] = s[i];
                ans[s.length() - x - 1] = s[i];
                i++;
            x++;
            }
            else
            {
                if (x2 == 1)
                {
                    cout << "NO SOLUTION" << endl;
                    return 0;
                }
                ans[s.length()/2] = s[i];
                x2++;
            }       
            if (x == ((s.length() / 2) + 1))
            {
                break;
            }
        }
    }
    cout << ans << endl;
}
