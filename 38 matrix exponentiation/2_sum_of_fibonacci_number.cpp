#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

vvi multiply(vvi a, vvi b)
{
    int n1 = a.size(), n2 = b.size(), n3 = b[0].size();
    vvi ans(n1, vi(n3, 0));

    rep(i, 0, n1)
    {
        rep(j, 0, n3)
        {
            rep(k, 0, n2)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return ans;
}

vvi power(vvi a, int n)
{
    if (n == 0)
    {
        int sz = a.size();
        vvi ans(sz, vi(sz, 0));
        for (int i = 0; i < sz; i++)
        {
            ans[i][i] = 1;
        }
        return ans;
    }

    if (n == 1)
    {
        return a;
    }

    vvi temp = power(a, n / 2);
    vvi ans = multiply(temp, temp);

    if (n & 1)
    {
        ans = multiply(ans, a);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vvi a{
        {1, 1, 1},
        {0, 1, 1},
        {0, 1, 0}};

    vvi ans = power(a, n);

    cout << ans[0][2] << endl;
    return 0;
}