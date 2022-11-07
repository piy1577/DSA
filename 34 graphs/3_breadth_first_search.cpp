#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>

int main() {
    int n, m;
    cin >> n >> m;
    bool vis[n+1];
    for(int i=0; i<=n; i++){
        vis[i] =0;
    }
    vi adj[n+1];
    rep(i, 0,m){
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    queue<int> q;

    q.push(1);
    vis[1] = true;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << endl;

        vector<int>:: iterator it;
        for(it = adj[node].begin(); it != adj[node].end(); it++){
            if(!vis[*it]){
                vis[*it] = true;
                q.push(*it);
            }
        }
    }
    return 0;
}