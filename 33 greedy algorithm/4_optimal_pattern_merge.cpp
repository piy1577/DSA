#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> merge;
    rep(i, 0, n){
        int x;
        cin >> x;
        merge.push(x);
    }
    int ans=0;
    while(merge.size() >1){
        int e1 = merge.top();
        merge.pop();
        int e2 = merge.top();
        merge.pop();
        ans += e1 + e2;
        merge.push(e1 + e2);
    }

    cout << ans << endl;
    return 0;
}