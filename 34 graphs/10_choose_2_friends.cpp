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
vi component;

int get_comp(int i){
    vis[i]= true;
    int ans =1;
    for(auto j: adj[i]){
        if(!vis[j]){
            ans += get_comp(j);
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    rep(i, 0, m){
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    rep(i, 0, n){
        if(!vis[i]){
            component.push_back(get_comp(i));
        }
    }

    long long ans = 1;
    for(auto i: component){
        ans += i*(n-i);
    }

    cout << ans/2 << endl;
    return 0;
}