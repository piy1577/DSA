#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
const int N = 1e5;
int h[N];
vi dp(N, -1);

int func(int i)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int cost = INT_MAX;

    cost = min(cost, func(i - 1) + abs(h[i] - h[i - 1]));

    if (i > 1)
        cost = min(cost, func(i - 2) + abs(h[i] - h[i - 2]));

    return dp[i] = cost;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << func(n - 1);
    return 0;
}