#include <iostream>
using namespace std;

int check(int n){
    return !(n&n-1);
}

int main() {
    int n;
    cin >> n;

    if(check(n)==true){
        cout << "true"<<endl;
    }else {
        cout << "false" << endl;
    }
    return 0;
}