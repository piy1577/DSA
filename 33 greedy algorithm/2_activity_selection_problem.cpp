#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> activity;
    rep(i, 0, n){
        int start, end;
        cin >> start >> end;
        activity.push_back({start, end});
    }

    sort(activity.begin(), activity.end(), [](pair<int, int> &a, pair<int, int> &b){
        if(a.ss != b.ss){
            return a.ss < b.ss;
        }
        return a.ff< b.ff;
    });

    int count = 1;
    int end = activity[0].ss;
    rep(i, 1, n){
        if(activity[i].ff >= end){
            count++;
            end = activity[i].ss;
        }
    }

    cout << count << endl;
    return 0;
}