#include<iostream>
#include<string>
using namespace std;

void replace(string str){
    if(str.length() == 0){
        return;
    }

    if(str[0]== 'p'){
        if(str[1]== 'i'){
            str.erase(0, 2);
            cout << "3.14";
            replace(str);
        }else {
            char s = str[0];
            str.erase(0, 1);
            cout << s;
            replace(str);
        }
    }else {
        char s = str[0];
        str.erase(0, 1);
        cout << s;
        replace(str);
    }
}

int main() {
    string s;
    cin >> s;

    replace(s);
    return 0;
}