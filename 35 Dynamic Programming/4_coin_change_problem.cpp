#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
const int INF = 1e5;
vi dp;

int number(int n, vi coins)
{
    if (dp[n] != INF)
    {
        return dp[n];
    }

    rep(i, 0, coins.size())
    {
        if (n == coins[i])
        {
            return dp[n - coins[i]] = 1;
        }
        if (n > coins[i])
        {
            dp[n] = min(dp[n], number(n - coins[i], coins) + 1);
        }
    }

    return dp[n];
}

int main()
{
    int n = 18;
    vi coins = {1, 5, 7};
    dp = vi(n + 1, INF);
    cout << number(n, coins);
    return 0;
}