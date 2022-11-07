#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=n-1;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout << "  ";
        }
        for(int k=n-i;k>0;k--){
            cout << k<< " ";
        }
        for(int l=2;l<=n-i;l++){
            cout << l << " ";
        }
        cout << endl;
    }
}