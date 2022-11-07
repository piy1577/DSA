#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

int LIS(vi arr)
{
    vi dp(arr.size(), 1);
    int ans = INT_MIN;
    rep(i, 0, arr.size())
    {
        rep(j, 0, i)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
        ans = max(ans, dp[i]);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
    {
        cin >> arr[i];
    }
    cout << LIS(arr) << endl;
    return 0;
}