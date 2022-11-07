#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
vector<vector<vector<int>>> dp(205, vvi(205, vi(205, -1)));

int LCS(string s1, string s2, string s3, int i, int j, int k)
{
    if (dp[i][j][k] != -1)
    {
        return dp[i][j][k];
    }
    if (i == 0 || j == 0 || k == 0)
    {
        return 0;
    }
    if ((s1[i - 1] == s2[j - 1]) && (s2[j - 1] == s3[k - 1]))
    {
        return dp[i][j][k] = 1 + LCS(s1, s2, s3, i - 1, j - 1, k - 1);
    }

    dp[i - 1][j][k] = LCS(s1, s2, s3, i - 1, j, k);
    dp[i][j - 1][k] = LCS(s1, s2, s3, i, j - 1, k);
    dp[i][j][k - 1] = LCS(s1, s2, s3, i, j, k - 1);
    return dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i][j][k - 1]});
}

int main()
{
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cout << LCS(s1, s2, s3, s1.size(), s2.size(), s3.size()) << endl;
    return 0;
}