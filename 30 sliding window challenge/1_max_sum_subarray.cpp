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

    int k, x;
    cin >> k >> x;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int max_subarray = INT_MIN;
    int i = k;
    while (i < n)
    {
        if (sum > max_subarray && sum <= x)
        {
            max_subarray = sum;
        }
        sum += arr[i] - arr[i - k];
        i++;
    }

    cout << max_subarray << endl;
    return 0;
}