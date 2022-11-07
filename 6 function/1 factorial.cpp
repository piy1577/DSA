#include <iostream>
using namespace std;

int factorial(int n) {//4
    int f =1;
    for(int i=1; i<=n;i++){
        f = f*i;
    }//1 2 6 24

    return f;
}


int main(){
    int n;
    cin >>n;

    cout << factorial(n)<<endl;

    return 0;
}