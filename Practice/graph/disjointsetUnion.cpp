#include <bits/stdc++.h>
using namespace std;
vector<int> parent, size;

void make(int &n)
{
    parent[n] = n;
}

int findparent(int &a)
{
    if (parent[a] == a)
    {
        return a;
    }
    return parent[a] = findparent(parent[a]);
}

void union_set(int &a, int &b)
{
    a = findparent(a);
    b = findparent(b);

    if (a != b)
    {
        if (size[a] > size[b])
        {
            swap(a, b);
        }
        parent[b] = a;
        size[a] += size[b];
    }
}

int main()
{
    int n, m;
    cout << "Number of vertices: ";
    cin >> n;
    cout << "Number of edges: ";
    cin >> m;

    parent = vector<int>(n);
    size = vector<int>(n, 1);

    for (int i = 0; i < n; i++)
    {
        make(i);
    }

    cout << "Edges are: " << endl;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        union_set(x, y);
    }
    
}