#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

vvi dp;
// RECURSIVE APPROACH
int LCS(string s1, string s2, int n, int m)
{
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (s1[n - 1] == s2[m - 1])
    {
        return dp[n][m] = 1 + LCS(s1, s2, n - 1, m - 1);
    }

    return dp[n][m] = max(LCS(s1, s2, n, m - 1), LCS(s1, s2, n - 1, m));
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    dp = vvi(s1.length() + 1, vi(s2.length() + 1));
    // rep(i, 0, s1.length() + 1)
    // {
    //     dp[i][0] = 0;
    // }
    // rep(i, 0, s2.length() + 1)
    // {
    //     dp[0][i] = 0;
    // }
    // cout << LCS(s1, s2, s1.length(), s2.length()) << endl;

    // TABULATION METHOD
    rep(i, 0, s1.length() + 1)
    {
        rep(j, 0, s2.length() + 1)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
    }

    cout << dp[s1.length()][s2.length()] << endl;
    return 0;
}