#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i=a; i<b;i++)
#define ff first
#define ss second

int maximum_difference(int arr[], int n){
    priority_queue<int, vector<int>> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    rep(i, 0, n/2){
        maxheap.push(arr[i]);
        minheap.push(arr[i+(n/2)]);
    }
    int ans =0;
    while(!maxheap.empty() && !minheap.empty()){
        ans += maxheap.top() - minheap.top();
        maxheap.pop(); minheap.pop();
    }

    return ans;
}

int minimum_difference(int arr[], int n){
    priority_queue<int, vector<int>> a, b;
    for(int i=0; i<n; i+=2){
        a.push(arr[i]);
        b.push(arr[i+1]);
    }
    int ans =0;
    rep(i, 0, n/2){
        ans += a.top() - b.top();
        a.pop(); b.pop();
    }
    
    return ans;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    rep(i, 0, n)
        cin >> arr[i];
    sort(arr, arr+n, greater<int>());

    cout << "Maximum difference is: " << maximum_difference(arr, n) << endl;
    cout << "Minimum difference is: " << minimum_difference(arr, n) << endl;

    return 0;
}