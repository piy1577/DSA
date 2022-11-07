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
    int c1 = 0, c2 = 0, c3 = 0;
    rep(i, 1, n + 1)
    {
        dp[i] = min({2 * dp[c1], 3 * dp[c2], 5 * dp[c3]});
        if (dp[i] == 2 * dp[c1])
            c1++;
        if (dp[i] == 3 * dp[c2])
            c2++;
        if (dp[i] == 5 * dp[c3])
            c3++;
    }
    cout << dp[n - 1];
    return 0;
}