#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
vi parent;
vi sz;
vvi edges;

void make(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v)
{
    if (parent[v] == v)
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (a < b)
        {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    parent = vi(n);
    sz = vi(n);

    rep(i, 0, n)
    {
        make(i);
    }

    rep(i, 0, m)
    {
        int w, u, v;
        cin >> u >> v >> w;
        edges.push_back({w, u, v});
    }

    sort(edges.begin(), edges.end());

    int cost = 0;
    for (auto i : edges)
    {
        int x = find_set(i[1]);
        int y = find_set(i[2]);

        if (x != y)
        {
            cout << i[1] << " " << i[2] << endl;
            cost += i[0];
            union_set(i[1], i[2]);
        }
    }

    cout << cost << endl;
    return 0;
}