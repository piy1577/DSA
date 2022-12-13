#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
int p = 3;

int main()
{
    string s = "apnacollegeap";
    string t = "ap";
    vi power(s.size(), 1);
    for (int i = 1; i < s.size(); i++)
    {
        power[i] = power[i - 1] * p;
    }

    vi h(s.size() + 1, 0);

    for (int i = 0; i < s.size(); i++)
    {
        h[i + 1] = h[i] + ((s[i] - 'a' + 1) * power[i]);
    }

    int h_s = 0;
    for (int i = 0; i < t.size(); i++)
    {
        h_s = h_s + (t[i] - 'a' + 1) * power[i];
    }
    for (int i = 0; i + t.size() - 1 < s.size(); i++)
    {
        if (h[i + t.size()] - h[i] == h_s * power[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}