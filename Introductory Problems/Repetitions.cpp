#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long c = 1;
    long long m = 0;
    if(s.length()==1)
    {
        cout<<1<<endl;
        return 0;
    }
    
    for (long long i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
            c++;
        else
            c = 1;
        m = max(m, c);
    }
    cout << m << endl;
}
