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
    vi dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;

    rep(i, 2, n + 1)
    {
        dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
    }

    cout << dp[n] << endl;
    return 0;
}