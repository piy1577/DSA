#include <iostream>
using namespace std;

int find(int a, int b){
    
    while(a>0){
        int modulus = a%b;
        if(modulus ==0){
            return b;
        }else {
            a = b;
            b = modulus;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << find(a , b) << endl;

    return 0;
}