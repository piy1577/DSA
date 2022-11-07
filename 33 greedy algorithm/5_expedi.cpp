#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    int n, s, l;
    cin >> n >> s >> l;

    vector<pair<int,int>> stops(n);

    rep(i, 0, n){
        cin >> stops[i].ff  >> stops[i].ss;
    }

    sort(stops.begin(), stops.end());

    priority_queue<int, vector<int>> pq;
    int count =0, curr=l;
    rep(i, 0, n){
        pq.push(stops[i].ss);

        if(i==n-1){
            if(curr < (s - stops[i].ff)){
                count++;
            }
        }else {
            if(i==0){
                curr -= stops[i].ff;
            }else {
                curr -= stops[i+1].ff - stops[i].ff;
            }
            while(curr < (stops[i+1].ff-stops[i].ff)){
                count++;
                curr += pq.top();
                pq.pop();
            }
        }
    }

    cout << count <<endl;

    return 0;
}