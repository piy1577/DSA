#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    int n, capacity;
    cin>> n >> capacity;
    vector<vector<int>> thing;
    rep(i, 0, n){
        int value, weight, valueperweight;
        cin >> value >> weight;
        valueperweight = value/weight;
        thing.push_back({value, weight, valueperweight});
    }

    sort(thing.begin(), thing.end(), [&](vector<int> &a, vector<int> &b){
        return a[2] > b[2];
    });

    int prize =0;
    rep(i, 0, n){
        if(thing[i][1] > capacity){
            prize += capacity*thing[i][2];
            break;
        }
        prize += thing[i][0];
        capacity -= thing[i][1];
    }

    cout << prize << endl;
    return 0;
}