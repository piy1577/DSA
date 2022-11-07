#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
vi dp(1e5, -1);

int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    if (dp[n - 1] == -1)
    {
        dp[n - 1] = fib(n - 1);
    }
    if (dp[n - 2] == -1)
    {
        dp[n - 2] = fib(n - 2);
    }
    return dp[n - 1] + dp[n - 2];
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}