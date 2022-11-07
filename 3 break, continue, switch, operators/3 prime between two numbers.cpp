#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    cout << endl << endl;


    for (int i=a;i<=b;i++){
        for (int div=2;div <i;div++){
            if(i%div==0){
                break; 
            }else if(div == i-1) {
                cout << i << endl;
            }
        }
    }

    return 0;
}