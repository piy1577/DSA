#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define v(a) vector<a>
#define p(a) pair<a, a>
#define vv(a) vector<v(a)>
#define vp(a) vector<p(a)>
v(bool) vis;
vv(int) adj;
v(int) col;
bool flag = true;

void bipartite(int i, int j){
    if(col[i] != -1 and col[i] != j){
        flag = false;
        return;
    }

    col[i] = j;
    if(vis[i])
        return;
    vis[i] = true;
    for(auto k: adj[i]){
        bipartite(k, j xor 1);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    adj = vv(int)(n);
    col = v(int)(n, -1);
    vis = v(bool)(n, false); 

    rep(i, 0, m){
        int x,y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    rep(i, 0, n){
        if(!vis[i]){
            bipartite(i, 0);
        }
    }

    if(flag){
        cout << "Graph is a bipartite graph" << endl;
    }else {
        cout << "Graph is not a bipartite graph" <<endl;
    }

    return 0;
}