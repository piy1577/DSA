#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void reverse(string str){
    if(str.length() ==0){
        return;
    }else {
        char s = str[0];
        str.erase(0, 1);
        reverse(str);
        cout << s;
    }
}

int main() {
    string str;
    cin >> str;
    reverse(str);

    return 0;
}