#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
vvi dp;
vi coins;

int solve(int i, int j)
{
    if (i == j)
    {
        return coins[i];
    }
    if (i > j)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    return dp[i][j] = max(coins[i] + min(solve(i + 2, j), solve(i + 1, j - 1)), coins[j] + min(solve(i + 1, j - 1), solve(i, j - 2)));
}

int main()
{
    int n;
    cin >> n;
    coins = vi(n);
    dp = vvi(n, vi(n, -1));
    rep(i, 0, n)
    {
        cin >> coins[i];
    }
    cout << solve(0, n - 1);
    return 0;
}