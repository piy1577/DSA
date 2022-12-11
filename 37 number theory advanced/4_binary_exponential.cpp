#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
const double N = 32, MOD = 1e9 + 7;

double power(int a, int n)
{
    double ans = 1;
    while (n > 0)
    {
        if (n & 1)
        {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
};

int main()
{
    int a, n;
    cin >> a >> n;
    cout << pow(a, n) << endl;
    cout << power(a, n) << endl;
    return 0;
}