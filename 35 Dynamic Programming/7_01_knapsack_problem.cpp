#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

int knapsack(vii weights, int capacity)
{
    vvi matrix(weights.size() + 1, vi(capacity + 1));
    rep(i, 0, weights.size() + 1)
    {
        rep(j, 0, capacity + 1)
        {
            if (i == 0 || j == 0)
            {
                matrix[i][j] = 0;
            }
            else
            {
                if (j < weights[i - 1].ss)
                {
                    matrix[i][j] = matrix[i - 1][j];
                }
                else
                {
                    matrix[i][j] = max(matrix[i - 1][j], weights[i - 1].ff + matrix[i - 1][j - weights[i - 1].ss]);
                }
            }
        }
    }

    return matrix[weights.size()][capacity];
}

int main()
{
    int n;
    cin >> n;
    vii weights(n);
    rep(i, 0, n)
    {
        cin >> weights[i].ff >> weights[i].ss;
    }
    int capacity;
    cin >> capacity;

    cout << knapsack(weights, capacity) << endl;
    return 0;
}