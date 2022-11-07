#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
vvi dp;

int LCS(vi a, vi b, int i, int j, int k)
{
    if (i >= a.size() || j >= b.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int c1 = 0, c2 = 0, c3 = 0;
    if (a[i] == b[j])
    {
        c1 = 1 + LCS(a, b, i + 1, j + 1, k);
    }
    if (k > 0)
    {
        c2 = 1 + LCS(a, b, i + 1, j + 1, k - 1);
    }
    c3 = max(LCS(a, b, i + 1, j, k), LCS(a, b, i, j + 1, k));
    return dp[i][j] = max({c1, c2, c3});
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vi a(n), b(m);
    dp = vvi(n, vi(m, -1));
    rep(i, 0, n)
    {
        cin >> a[i];
    }
    rep(i, 0, m)
    {
        cin >> b[i];
    }
    cout << LCS(a, b, 0, 0, k);
    return 0;
}