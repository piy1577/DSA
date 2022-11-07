#include <bits/stdc++.h>
using namespace std;
bool character(char r){
    if(r=='('||r=='+'||r=='-'||r=='/'||r=='*'||r=='%'){
        return true;
    }
    return false;
}
bool redundant(string s){
    stack <char> st;

    for(int i=0;i<s.length(); i++){
        if(character(s[i])){
            st.push(s[i]);
        }else if(s[i]==')'){
            if(st.top()=='('){
                return true;
            }else {
                while(st.top() != '('){
                    st.pop();
                }
                st.pop();
            }
        }
    }

    return false;
}

int main() {
    string s= "((a+b))";

    if(redundant(s)){
        cout << "redundant paranthesis are present";
    }else {
        cout << "redundant paranthesis are absent";
    }
    return 0;
}