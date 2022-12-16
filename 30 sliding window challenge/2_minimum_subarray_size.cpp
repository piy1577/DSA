#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int ans = n, sum = 0, start = 0, i = 0;
    while (i < n)
    {
        if (i - start < ans && sum > x)
        {
            ans = i - start;
        }
        if (sum > x)
        {
            start++;
            sum -= arr[start - 1];
        }
        else
        {
            sum += arr[i];
            i++;
        }
    }

    cout << ans << endl;
    return 0;
}