#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int main() {
    int n;
    cin >>n;
    int arr[n];
    rep(i, 0, n){
        cin >> arr[i];
    }
    sort(arr , arr+n, greater<int>());

    int x;
    cin >> x;

    int count=0;
    rep(i, 0, n){
        count += x/arr[i];
        x%=arr[i];
    }

    cout << count << endl;
    return 0;
}