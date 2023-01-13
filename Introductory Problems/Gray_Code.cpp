#include "bits/stdc++.h"
using namespace std;

vector<string> gray_code(int n)
{
    vector<string> codes;
    if (n == 0)
    {
        codes.push_back("");
        return codes;
    }
    vector<string> prev_codes = gray_code(n - 1);
    for (int i = 0; i < prev_codes.size(); i++)
    {
        codes.push_back("0" + prev_codes[i]);
    }
    for (int i = prev_codes.size() - 1; i >= 0; i--)
    {
        codes.push_back("1" + prev_codes[i]);
    }
    return codes;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v = gray_code(n);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}