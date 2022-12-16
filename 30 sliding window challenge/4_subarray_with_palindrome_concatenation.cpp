#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

bool ispalindrome(int n, int k)
{
    int s = 10, e = pow(10, k - 1);
    while (n > 0)
    {
        if (n / e != n % s)
        {
            return false;
        }
        n %= e;
        n /= s;
        e /= 100;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    int num = 0, k_power = 1;
    for (int i = 0; i < k; i++)
    {
        num = num * 10 + arr[i];
        k_power *= 10;
    }
    k_power /= 10;
    if (ispalindrome(num, k))
    {
        cout << 0 << endl;
    }

    int i = k;
    while (i < n)
    {
        num = num % k_power;
        num = num * 10 + arr[i];
        if (ispalindrome(num, k))
        {
            cout << i - k + 1 << endl;
        }
        i++;
    }

    return 0;
}