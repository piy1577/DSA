#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
vi dp;

int staircase(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        if (dp[n] != 0)
            return dp[n];

        dp[n] += staircase(n - 1) + staircase(n - 2);
    }

    return dp[n];
}

int main()
{
    // number of ways to climb a stair
    int n;
    cin >> n;
    dp = vi(n + 1, 0);
    cout << staircase(n);
    return 0;
}

/* 4
1111
112
121
211
22
*/