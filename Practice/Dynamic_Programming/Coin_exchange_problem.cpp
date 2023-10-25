#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 10e5 + 2;
vector<int> dp;

int coin_exchange(vector<int> &coins, int target)
{
    if (dp[target] != INF)
    {
        return dp[target];
    }
    if (target < 0)
    {
        return INF;
    }

    for (int i = 0; i < coins.size(); i++)
    {
        int ans = coin_exchange(coins, target - coins[i]);
        dp[target] = min(dp[target], 1 + ans);
    }
    return dp[target];
}

int main()
{
    cout << "number of coins: ";
    int n, target;
    cin >> n;
    vector<int> coins(n);
    cout << "Enter the coins: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    cout << "Enter the target number: ";
    cin >> target;
    dp = vector<int>(target + 1, INF);
    dp[0] = 0;
    sort(coins.begin(), coins.end());
    cout << coin_exchange(coins, target) << endl;
    return 0;
}