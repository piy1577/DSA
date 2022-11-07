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
    int n, w;
    cin >> n >> w;

    vi wt(n), val(n), dp(w + 1, 0);
    rep(i, 0, n)
    {
        cin >> val[i];
    }
    rep(i, 0, n)
    {
        cin >> wt[i];
    }

    rep(j, 0, w + 1)
    {
        rep(i, 0, n)
        {
            dp[j] = max(dp[j], val[i] + dp[j - wt[i]]);
        }
    }

    cout << dp[w] << endl;
    return 0;
}
// not done
