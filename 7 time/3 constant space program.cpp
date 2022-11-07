#include <iostream>
using namespace std;

int main() {
    int n; //4 bytes
    int a = 0; //4 bytes
    cin>>n;

    for(int i =0;i<n ;i++){ //4 bytes
        a+=1;
    }

    // total 12 bytes
    return 0;
}