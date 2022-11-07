#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b; i++)

int main() {
    int n, key;
    cin >> n;
    priority_queue<int, vector<int>> pq;
    rep(i, 0, n){
        int x;
        cin >> x;
        pq.push(x);
    }

    int k; cin >>k;
    int sum =0, count =0;

    while(sum < k){
        sum+= pq.top();
        pq.pop();
        count++;
    }

    cout << count << endl;
    return 0;
}