#include <iostream>
#include <string>
using namespace std;

string move_x(string str){
    if(str.length()==0){
        return "";
    }
    char s = str[0];

    string ans = move_x(str.substr(1));
    if(ans[0]=='x'){
        ans = ans.substr(1);
        ans.append("x");
    }
    return s + ans;
}

int main() {
    string str;
    cin >> str;

    cout << move_x(str);

    return 0;
}