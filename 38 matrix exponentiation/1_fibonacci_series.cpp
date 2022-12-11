#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

vvi matrixMultiplication(vvi a, vvi b)
{
    int n1 = a.size();
    int n2 = a[0].size();
    int n3 = b[0].size();

    vvi ans(n1, vi(n2, 0));
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    return ans;
}

vvi power(vvi a, int p)
{
    if (p == 0)
    {
        int sz = a.size();
        vvi ans(sz, vi(sz, 0));
        for (int i = 0; i < sz; i++)
        {
            ans[i][i] = 1;
        }
        return ans;
    }

    if (p == 1)
    {
        return a;
    }

    vvi temp = power(a, p / 2);
    vvi ans = matrixMultiplication(temp, temp);

    if (p & 1)
    {
        ans = matrixMultiplication(ans, a);
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vvi a = {
        {1, 1},
        {1, 0}};

    vvi ans = power(a, n);

    int sz = ans.size();
    rep(i, 0, sz)
    {
        rep(j, 0, sz)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}