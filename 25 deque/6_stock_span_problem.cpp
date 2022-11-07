#include <bits/stdc++.h>
using namespace std;

vector<int> stock(vector<int> a){
    vector <int> res;
    stack <pair<int, int>> st;
    for(int i=0;i<a.size(); i++){
        int num =1;
        while(!st.empty()&& st.top().first <= a[i]){
            num+= st.top().second;
            st.pop();
        }
        st.push({a[i], num});
        res.push_back(num);
    }

    return res;
}

int main() {
    vector <int> a = {100, 80, 60, 70, 60, 75, 85};
    vector <int> ans = stock(a);
    for(auto i: ans){
        cout << i << " ";
    }cout << endl;
    return 0;
}