#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    int n;
    cin >> n;
    int arr[n];
    rep(i, 0, n){
        cin >> arr[i];
    }

    int sum =0;
    map<int, int> m;

    rep(i, 0, n){
        sum += arr[i];
        m[sum]++;
    }

    map<int, int>::iterator it;
    int ans=0;
    for(it = m.begin(); it!= m.end(); it++){
        int x = it->ss;
        ans += x*(x-1)/2;
        if(it->ff ==0){
            ans += x;
        }
    }
    cout << ans << endl;
    return 0;
}