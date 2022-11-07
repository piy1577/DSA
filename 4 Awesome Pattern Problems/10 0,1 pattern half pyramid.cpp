#include <iostream>
using namespace std;

int main() {
    int n;
    int p=0;
    cin >>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(p%2==0){
                cout << "1 ";
                p++;
            }else{
                cout << "0 ";
                p++;
            }
        }
        cout << endl;
    }
    return 0;
}