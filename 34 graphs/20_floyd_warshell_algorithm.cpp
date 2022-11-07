#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for(int i=a;i <b;i++)

int main() {
    int INF = 1e5;
    vvi adj = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };

    vvi dist = adj;
    int n = dist.size();
    rep(k, 0, n){
        rep(i, 0, n){
            rep(j, 0, n){
                if(dist[i][k]+ dist[k][j]< dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    rep(i, 0, n){
        rep(j, 0,dist.size()){
            if(dist[i][j]==INF){
                cout << "INF ";
            }else {
                cout << dist[i][j] <<" ";
            }
        }
        cout << endl;
    }

    
    return 0;
}