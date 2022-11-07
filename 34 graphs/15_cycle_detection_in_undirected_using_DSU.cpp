#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
vi parent;
vi sz;
vvi adj;

void make_set(int v){
    parent[v] = v;
    sz[v] =1;
}

int find_set(int v){
    if(parent[v] ==v){
        return v;
    }

    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);

    if(a !=b){
        if(sz[a]< sz[b]){
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
}

int main() {
    int n, m;
    cin >> n >>m;
    parent = vi(n);
    sz = vi(n);

    rep(i, 0, n){
        make_set(i);
    }

    rep(i, 0, m){
        int x, y;
        cin >> x >>y;

        adj.push_back({x, y});
    }
    bool cycle = false;
    for(auto i: adj){
        int x = find_set(i[0]);
        int y = find_set(i[1]);
        if(x==y){
            cycle = true;
            break;
        }
        union_set(x, y);
    }

    if(cycle){
        cout << "Cycle Detected in graph"<<endl;
    }else {
        cout << "No cycle detected in graph" <<endl;
    }
    return 0;
}