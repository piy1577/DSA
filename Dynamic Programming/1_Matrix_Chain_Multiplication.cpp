#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

// Recusive Method
//  int MCM(vi matrix, int start, int end)
//  {
//      if (start == end)
//      {
//          return 0;
//      }
//      if (start = end - 1)
//      {
//          return matrix[start - 1] * matrix[start] * matrix[end];
//      };
//      int ans = INT_MAX;
//      rep(i, start, end)
//      {
//          ans = min(ans, (MCM(matrix, start, i) * MCM(matrix, i + 1, end)) + (matrix[start - 1] * matrix[i] * matrix[end]));
//      }
//      return ans;
//  }

// Tabulation Method

int MCM(vi matrix)
{
    int n = matrix.size();
    vvi dp(n, vi(n, INT_MAX));

    rep(i, 1, n)
    {
        dp[i][i] = 0;
    }

    rep(l, 2, n)
    {
        rep(i, 1, n - l + 1)
        {
            int j = i + l - 1;
            rep(k, i, j)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + matrix[i - 1] * matrix[i] * matrix[j]);
            }
        }
    }
    return dp[1][n - 1];
}

int main()
{
    int n;
    cin >> n;
    vi matrix(n);
    rep(i, 0, n)
    {
        cin >> matrix[i];
    }

    cout << MCM(matrix);
    return 0;
}