#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

int digit_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
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

    int k, sum = 0;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        sum += digit_sum(arr[i]);
    }

    int i = k;
    while (i <= n)
    {
        if (sum % 3 == 0)
        {
            cout << "YES " << endl;
            break;
        }
        sum += digit_sum(arr[i]);
        sum -= digit_sum(arr[i - k]);
        i++;
    }
    if (i > n)
    {
        cout << "NO" << endl;
    }
    return 0;
}