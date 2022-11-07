#include <bits/stdc++.h>
using namespace std;

int hexadecimal(char n){
    switch(n){
        case 'A':
        return 10;

        case 'B':
        return 11;

        case 'C':
        return 12;

        case 'D':
        return 13;

        case 'E':
        return 14;

        case 'F':
        return 15;

        case '1':
        return 1;

        case '2':
        return 2;

        case '3':
        return 3;

        case '4':
        return 4;

        case '5':
        return 5;

        case '6':
        return 6;

        case '7':
        return 7;

        case '8':
        return 8;

        case '9':
        return 9;

        case '0':
        return 0;
    }
}

int conversion(string n){
    int ans =0;
    for(int i=0;i<n.length();i++){
        char digit = n[i];
        ans = ans*16 + hexadecimal(digit);
    }

    return ans;
}

int main() {
    string n;
    cin >> n;

    cout << conversion(n)<< endl;
    
    return 0;
}