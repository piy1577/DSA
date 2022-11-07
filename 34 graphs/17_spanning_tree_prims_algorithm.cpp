#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for(int i=a;i <b;i++)
vi vis;
vector<vvi> adj;
vi parent;
vi dist;
int cost =0;

void make_set(int v){
    parent[v] =v;
}

void primsMST(int source){
    set<vi> s;
    s.insert({0, source});
    dist[source] =0;

    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]] = 1;
        cout << x[1] <<" "<<  parent[x[1]] <<endl;
        cost += x[0];

        for(auto it: adj[x[1]]){
            if(!vis[it[1]]){
                if(dist[it[1]]> it[0]){
                    s.erase({dist[it[1]], it[1]});
                    dist[it[1]] = it[0];
                    s.insert({dist[it[1]], it[1]});
                    parent[it[1]] = x[1];
                }
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n>>m;

    vis = vi(n, 0);
    adj = vector<vvi>(n);
    parent = vi(n);
    dist = vi(n, 1e5);

    rep(i, 0, n){
        make_set(i);
    }

    rep(i, 0, m){
        int x, y, w;
        cin >> x >> y>> w;

        adj[x].push_back({w, y});
        adj[y].push_back({w, x});
    }

    primsMST(0);

    cout << cost <<endl;
    return 0;
}