#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
const int N= 1e5 +2;
bool vis[N];
vi adj[N];

bool cycleDetection(int node, int parent){
    vis[node] = true;

    for(auto i: adj[node]){
        if(vis[i]&& i != parent){
            return true;
        }else if(i!= parent && cycleDetection(i, node)){
            return true;
        }
    }

    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, N){
        vis[i] = false;
    }
    int node;
    rep(i, 0, m){
        int x, y;
        cin >> x >> y;
        if(i==0){
            node =x;
        }
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    if(cycleDetection(node, -1)){
        cout << "A Cycle Detected in Graph"<< endl;
    }else {
        cout << "Cycle is not present" << endl;
    }
    return 0;
}