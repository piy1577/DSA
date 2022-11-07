#include <bits/stdc++.h>
using namespace std;

int rainwater(vector<int> a){
    stack<int> st;
    int ans =0;
    for(int i=0;i<a.size(); i++){
        while(!st.empty() && a[st.top()]< a[i]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i- (st.top() + 1);
            ans +=(min(a[st.top()], a[i])- a[cur])* diff;
        }
        st.push(i);
    }
    return ans;
}
int main() {
    int n;
    vector <int> rain;

    rain.push_back(0);
    rain.push_back(1);
    rain.push_back(0);
    rain.push_back(2);
    rain.push_back(1);
    rain.push_back(0);
    rain.push_back(1);
    rain.push_back(3);
    rain.push_back(2);
    rain.push_back(1);
    rain.push_back(2);
    rain.push_back(1);
    cout << rainwater(rain)<< endl;
    return 0;
}