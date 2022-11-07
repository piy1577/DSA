#include <iostream>
using namespace std;

void prime_factorization(int n){
    int spf[100] ={0};
    for(int i=2; i<=n; i++){
        if(spf[i]==0){
            for(int j=i; j<=n; j+=i){
                if(spf[j]==0){
                    spf[j] = i;
                }
            }
        }
    }

    while(n>1){
        cout << spf[n] << " ";
        n/= spf[n];
    }
}

int main() {
    int n;
    cin >> n;
    
    prime_factorization(n);

    return 0;
}