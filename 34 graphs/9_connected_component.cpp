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
vector<bool> vis(N, false);
vi adj[N];
vi components;

int get_comp(int n){
    if(vis[n]){
        return 0;
    }
    vis[n] = true;
    int ans =1;
    for(auto i: adj[n]){
        if(!vis[i]){
            ans += get_comp(i);
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n>> m;

    rep(i, 0, m){
        int x, y;
        cin >> x >>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    rep(i, 0, n){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }

    for(auto i: components){
        cout << i << " ";
    }
    return 0;
}