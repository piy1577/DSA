#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    string s;
    cin >> s;
    int e = 1, a = 0, ab = 0, abc = 0;
    rep(i, 0, s.length())
    {
        if (s[i] == 'a')
        {
            a += e;
        }
        else if (s[i] == 'b')
        {
            ab += a;
        }
        else if (s[i] == 'c')
        {
            abc += ab;
        }
        else if (s[i] == '?')
        {
            abc = 3 * abc + ab;
            ab = 3 * ab + a;
            a = 3 * a + e;
            e *= 3;
        }
    }

    cout << abc << endl;
    return 0;
}