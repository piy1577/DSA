#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> a;
    for(auto &i: a){
        cin >> i;
    }

    deque<int> q;
    vector <int> ans;

    for(int i=0;i<k;i++){
        if(!q.empty() && a[q.back()]< a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front() == i-k){
            q.pop_front();
        }
        while(!q.empty() && a[q.back()] < a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[i]);
    }

    for(auto i: ans){
        cout << i<< " ";
    }
    return 0;
}