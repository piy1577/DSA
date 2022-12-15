#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
int n;
int len;
struct Query
{
    int idx, l, r;
};

bool compare(Query q1, Query q2)
{
    if ((q1.l) / len == (q2.l) / len)
    {
        return q1.r > q2.r;
    }
    return q1.l / len > q2.l / len;
}

int main()
{
    cin >> n;
    vi a(n);

    rep(i, 0, n)
            cin >>
        a[i];

    len = sqrt(n);
    int queries;
    cin >> queries;
    Query Q[queries];

    for (int i = 0; i < queries; i++)
    {
        int l, r;
        cin >> l >> r;
        Q[i].l = l;
        Q[i].r = r;
        Q[i].idx = i;
    }

    sort(Q, Q + queries, compare);

    vi ans(queries);
    int curr_l = 0, curr_r = -1, l, r, curr_ans = 0;
    for (int i = 0; i < queries; i++)
    {
        l = Q[i].l, r = Q[i].r;
        l--;
        r--;
        while (curr_r < r)
        {
            curr_r++;
            curr_ans += a[curr_r];
        }

        while (curr_r > r)
        {
            curr_ans -= a[curr_r];
            curr_r--;
        }

        while (curr_l > l)
        {
            curr_l--;
            curr_ans += curr_l;
        }

        while (curr_l < l)
        {
            curr_ans -= curr_l;
            curr_l++;
        }
        ans[Q[i].idx] = curr_ans;
    }

    for (int i = 0; i < queries; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
