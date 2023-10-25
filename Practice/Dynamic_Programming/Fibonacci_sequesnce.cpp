#include <iostream>
#include <vector>
using namespace std;
vector<int> dp;

long long fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cin >> n;
    dp = vector<int>(n + 1, -1);

    cout << fibonacci(n) << endl;
}