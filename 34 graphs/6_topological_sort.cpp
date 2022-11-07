#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
const int N = 1e5 +2;
bool vis[N];
vi adj[N];

int main() {
    int n, m;
    cin >> n >> m;

    vi indegree(N, 0);
    rep(i, 0, N){
        vis[i]  = false;
    }

    rep(i, 0, m){
        int x, y;
        cin >> x>> y;

        adj[x].push_back(y);
        indegree[y]++;
    }

    queue<int> pq;

    rep(i,0, n){
        if(indegree[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        int x= pq.front();
        pq.pop();
        cout << x << " ";

        for(auto it: adj[x]){
            indegree[it]--;
            if(indegree[it]==0){
                pq.push(it);
            }
        }
    }


    return 0;
}