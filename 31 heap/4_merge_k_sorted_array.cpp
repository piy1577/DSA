#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pii pair<int, int>

int main() {
    int k; cin>> k;

    vector<vector<int>> a(k);
    rep(i, 0, k){
        int n; cin >> n;
        a[i] = vector<int>(n);
        rep(j, 0, n){
            cin >> a[i][j];
        }
    }

    vector<int> idx(k, 0);

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    rep(i, 0, k){
        pq.push({a[i][0], i});
    }

    vector<int> ans;

    while(!pq.empty()){
        pii x = pq.top();
        pq.pop();


        ans.push_back(x.first);
        if(idx[x.second]+1 < a[x.second].size()){
            pq.push({a[x.second][idx[x.second]+1], x.second});
        }
        idx[x.second]+=1;
    }

    rep(i, 0, ans.size()){
        cout << ans[i] << endl;
    } 

    return 0;
}