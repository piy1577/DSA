#include <iostream>
using namespace std;

int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }

    return f;
}


int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int ans = num/denom;

    return ans;
}

int main() {
    int a, b;
    cin >>a >> b;

    cout << nCr(a, b);

    return 0;
}