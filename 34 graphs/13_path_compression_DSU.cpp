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

int make(int v){
    parent[v] = v;
}

int find_set(int v){
    if(v == parent[v]){
        return v;
    }

    return parent[v] = find_set(parent[v]);
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a!= b){
        parent[b] = a;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    parent = vi(n);
    rep(i, 0, n){
        make(i);
    }

    rep(i, 0, m){
        int x, y;
        cin >> x >>y;
        union_set(x,y);
    }
    return 0;
}