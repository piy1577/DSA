#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

int remaining(int a)
{
    stack<int> s;
    int ans = 0, sum = 0, n = a;
    while (n > 0)
    {
        int last = n % 10;
        s.push(last);
        sum += last;
        n /= 10;
    }

    int digit = 9 - (sum % 9);
    if (digit == 9)
    {
        digit = 0;
    }
    while (!s.empty())
    {
        if (s.top() > digit && (ans == 0) ^ (digit == 0))
        {
            ans = ans * 10 + digit;
            digit = 10;
        }
        else
        {
            ans = ans * 10 + s.top();
            s.pop();
        }
    }
    if (digit != 10)
    {
        ans = ans * 10 + digit;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        cout << "Case #" << i
             << ": " << remaining(n) << endl;
    }
    return 0;
}