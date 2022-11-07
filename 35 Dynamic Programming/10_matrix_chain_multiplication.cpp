#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

int matrix_multiplication(vi matrix)
{
    int n = matrix.size();
    vvi dp(n, vi(n, 0));

    rep(i, 2, n)
    {
        rep(j, 0, n - i)
        {
            dp[i + j][j] = min(dp[i + j - 1][j] + (matrix[i + j] * matrix[j] * matrix[i + j - 1]), dp[i + j][j + 1] + (matrix[i + j] * matrix[j] * matrix[j + 1]));
        }
    }

    return dp[n - 1][n - 1];
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
    cout << matrix_multiplication(matrix) << endl;
    return 0;
}