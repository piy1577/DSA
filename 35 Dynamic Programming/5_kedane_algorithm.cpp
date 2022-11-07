#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

int max_subarray(vi arr)
{
    int curr = 0, maxarr = 0;
    rep(i, 0, arr.size())
    {
        curr += arr[i];
        if (curr < 0)
            curr = 0;

        maxarr = max(maxarr, curr);
    }

    return maxarr;
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
    cout << max_subarray(arr) << endl;
    return 0;
}