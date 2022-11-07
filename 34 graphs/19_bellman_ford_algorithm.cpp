#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for(int i=a;i <b;i++)
vector<vvi> edges;
vi dist;

void bellman_ford_algo(int source){
    dist[source] =0;
    rep(i, 0, edges.size()){
        for(auto it: edges[i]){
            dist [it[1]] = min(dist[it[1]], dist[i]+it[0]);
        }
    }
}

int main() {
    int n, m;
    cin >>n>>m;

    edges = vector<vvi>(n);
    dist = vi(n, 1e5);

    rep(i, 0, m){
        int x, y, w;
        cin >> x >> y >>w;

        edges[x].push_back({w, y});
    }

    int source; cin >> source;
    bellman_ford_algo(source);

    rep(i, 0, n){
        cout << dist[i] << " ";
    }
    return 0;
}

/*
5 8
1 2 3
3 2 5
1 3 2 
3 1 1
1 4 2
0 2 4
4 3 -3
0 1 -1
0
*/
