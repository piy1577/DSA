#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
int n;
vi bits;

void update(int idx, int value)
{
    while (idx <= n)
    {
        bits[idx] += value;
        idx += idx & (-idx);
    }
}

int query(int idx)
{
    int ans = 0;
    while (idx > 0)
    {
        ans += bits[idx];
        idx -= idx & (-idx);
    }
    return ans;
}

int main()
{
    cin >> n;
    bits = vi(n + 1, 0);
    vi arr(n + 1);
    rep(i, 1, n + 1)
    {
        cin >> arr[i];
        update(i, arr[i]);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << query(c) - query(b) << endl;
        }
        else
        {
            update(b, -arr[b]);
            arr[b] = c;
            update(b, c);
        }
    }
    return 0;
}