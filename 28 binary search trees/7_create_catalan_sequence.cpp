#include <iostream>
using namespace std;

int catalan(int n){
    if(n ==0|| n==1){
        return 1;
    }
    int data=0;
    for(int i=0; i<n;i++){
        data += catalan(i)*catalan(n-(i+1));
    }

    return data;
}

int main() {
    for(int i=0; i<=10;i++){
        cout << catalan(i) << endl;
    }
    return 0;
}