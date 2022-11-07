#include <bits/stdc++.h>
using namespace std;

int main() {
    int k=3;
    vector<int> a = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int i=0, ans =0, zero=0;
    for(int j=0;j<a.size();j++){
        if(a[j]==0){
            zero++;
            while(zero >k){
                if(a[i]==0){
                    zero--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }
    }

    cout << ans;

    return 0;
}