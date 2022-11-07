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
vector<bool> s(N, false);
bool visited[N];
vi adj[N];

bool CycleDetection(int node){
    s[node] = true;

    if(!visited[node]){
        visited[node] =true;
        for(auto i: adj[node]){
            if(!visited[i] && CycleDetection(i)){
                return true;
            }
            if(s[i]){
                return true;
            }
        }
    }

    s[node]= false;
    return false;
}

int main() {
    rep(i, 0, N){
        visited[i] = false;
    }
    int n, m;
    cin >> n >> m;

    int node;
    rep(i, 0, m){
        int x, y;
        cin >> x >> y;
        if(i==0){
            node =x;
        }
        adj[x].push_back(y);
    }

    if(CycleDetection(node)){
        cout << "Cycle Detected in graph" << endl;
    }else {
        cout << "Cycle Not Detected in graph" << endl;
    }
    return 0;
}