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
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
            cin >>
        a[i];

    int len = sqrt(n) + 1;
    vi b(len);
    rep(i, 0, n)
        b[i / len] = min(b[i / len], a[i]);

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int minimum = INT_MAX;
        for (int i = l; i <= r;)
        {
            if (i % len == 0 && i + len - 1 <= r)
            {
                minimum = min(minimum, b[i / len]);
                i += len;
            }
            else
            {
                minimum = min(minimum, a[i]);
                i++;
            }
        }
        cout << minimum << endl;
    }

    return 0;
}