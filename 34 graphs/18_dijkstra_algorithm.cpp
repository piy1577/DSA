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
vi parent;
vector<vvi> adj;
vi ans;
vi dist;

void dijkstra_algo(int source){
    set<vi> s;
    s.insert({0, source});
    dist[source] =0;

    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]] = 1;
        ans[x[1]] = x[0];
        
        for(auto it: adj[x[1]]){
            if(!vis[it[1]]){
                if(dist[it[1]]> it[0]+ dist[x[1]]){
                    s.erase({dist[it[1]], it[1]});
                    dist[it[1]]= it[0] + dist[x[1]];
                    s.insert({dist[it[1]], it[1]});
                }
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n>>m;

    vis = vi(n, 0);
    parent = vi(n);
    adj = vector<vvi>(n);
    ans = vi(n);
    dist = vi(n, 1e5);

    rep(i, 0, m){
        int x, y, w;
        cin >> x >> y>>w;
        adj[x].push_back({w, y});
        adj[y].push_back({w, x});
    }
    int k; cin >> k;
    dijkstra_algo(k);

    rep(i, 0, n){
        cout << ans[i]<<" ";
    }
    return 0;
}