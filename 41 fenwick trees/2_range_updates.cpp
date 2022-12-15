#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

void update(int idx, int value, int bit[], int n)
{
    while (idx <= n)
    {
        bit[idx] += value;
        idx += idx & (-idx);
    }
}

int query(int idx, int bit[])
{
    int ans = 0;
    while (idx > 0)
    {
        ans += bit[idx];
        idx -= idx & (-idx);
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int bit[n + 10] = {0};
        int u;
        cin >> u;
        while (u--)
        {
            int l, r, inc;
            cin >> l >> r >> inc;
            l++;
            r++;
            update(l, inc, bit, n);
            update(r + 1, -inc, bit, n);
        }

        int q;
        cin >> q;
        while (q--)
        {
            int l;
            cin >> l;
            cout << query(l, bit) << endl;
        }
    }
    return 0;
}