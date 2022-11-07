#include <iostream>
#include <stack>
using namespace std;

void reverse_string(string s){
    stack<string> st;
    string arg="";
    int i=0;
    while(i<s.length()){
        while (i < s.length() && s[i]!= ' ')
        {
            arg += s[i];
            i++;
        }
        st.push(arg);
        arg = "";
        i++;
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }cout << endl;
}

int main() {
    string s = "Hey, How are you doing?";
    reverse_string(s);
    return 0;
}