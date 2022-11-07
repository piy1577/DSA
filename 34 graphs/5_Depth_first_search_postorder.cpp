#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
const int N = 1e5+2;
bool vis[N];
vi adj[N];

void dfs(int node){
    vis[node] = 1;

    vi :: iterator it;

    for(it = adj[node].begin(); it != adj[node].end(); it++){
        if(!vis[*it]){
            dfs(*it);
        }
    }

    cout << node << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i=0; i<N ;i++){
        vis[i] = false;
    }

    rep(i, 0, m){
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    return 0;
}