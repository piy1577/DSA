#include <bits/stdc++.h>
using namespace std;

int largestarea(vector<int> v){
  int n = v.size(), ans =0, i=0;
  v.push_back(0);
  stack<int> st;

  while(i<n){
    while(!st.empty() && v[st.top()]> v[i]){
      int t = st.top();
      int h = v[t];
      st.pop();
      if(st.empty()){
        ans = max(ans, h*i);
      }else {
        int len = i -st.top() -1;
        ans = max(ans, h*len);
      }
    }
    st.push(i);
    i++;
  }

  return ans;
}

int main() {
  vector <int> v = {2, 1, 5, 6, 2, 3};
  cout << largestarea(v);
  return 0;
}