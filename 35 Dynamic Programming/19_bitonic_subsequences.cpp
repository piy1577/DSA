#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
vi dp;
int lis(vi &a, int n)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = 1;

    rep(i, 0, n)
    {
        if (a[n] > a[i])
            dp[n] = max(dp[n], 1 + lis(a, i));
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    vi a(n);
    dp = vi(n + 1, -1);
    rep(i, 0, n) cin >> a[i];

    cout << lis(a, n - 1) << endl;
    return 0;
}