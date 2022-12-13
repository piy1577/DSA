#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vvi vector<vi>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)
int n = 5;
vi arr;
vi tree(4 * n);

void build(int node, int s, int e)
{
    if (s == e)
    {
        tree[node] = arr[s];
        return;
    }

    int mid = (s + e) / 2;
    build(2 * node, s, mid);
    build(2 * node + 1, mid + 1, e);
    tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

void update(int node, int s, int e, int index, int value)
{
    if (s == e)
    {
        tree[node] = value;
        return;
    }
    int mid = (s + e) / 2;
    if (index <= mid)
    {
        update(2 * node, s, mid, index, value);
    }
    else
    {
        update(2 * node + 1, mid + 1, e, index, value);
    }
    tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int query(int node, int s, int e, int key)
{
    if (s == e)
    {
        if (key > tree[node])
        {
            return -1;
        }
        return s;
    }

    int mid = (s + e) / 2;
    if (key <= tree[2 * node])
    {
        return query(2 * node, s, mid, key);
    }
    return query(2 * node + 1, mid + 1, e, key);
}

int main()
{
    arr = {1, 3, 2, 4, 6};
    build(1, 0, 4);
    int a, b, c;
    cin >> a;
    while (a != -1)
    {
        if (a == 1)
        {
            cin >> b >> c;
            update(1, 0, 4, b, c);
        }
        else
        {
            cin >> b;
            cout << query(1, 0, 4, b) << endl;
        }
        cin >> a;
    }
    return 0;
}