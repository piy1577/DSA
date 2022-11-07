#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=6, target = 24;
    vector<int> a = {12, 3, 6, 9, 34, 25};
    bool found = false;
    sort(a.begin(), a.end());
    for(int i=0; i<n;i++) {
        int lo = i+1, hi = n-1;
        while(lo<hi){
            int current = a[i]+ a[lo]+ a[hi];
            if(current == target){
                found = true;
            }
            if(current <target){
                lo++;
            }else {
                hi--;
            }
        }
    }

    if(found){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
    return 0;
}