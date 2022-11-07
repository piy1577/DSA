#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
vi dp;

int MinSquare(int n)
{
    if (dp[n] != INT_MAX)
    {
        return dp[n];
    }
    for (int i = 1; i * i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + MinSquare(n - (i * i)));
    }

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    dp = vi(n + 1, INT_MAX);
    rep(i, 0, 4)
    {
        dp[i] = i;
    }

    cout << MinSquare(n) << endl;
    return 0;
}