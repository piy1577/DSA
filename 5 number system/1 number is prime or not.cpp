#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >>n;

    for(int div =2; div<=sqrt(n);div++){
        if(n%div==0){
            cout << "Not prime";
            break;
        }else if(div>=sqrt(n)-1){
            cout << "Prime";
        } 
    }

    return 0;
}