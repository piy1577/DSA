#include <iostream>
using namespace std;

void sequence(int t){
    int n1=0;
    int n2=1;
    if(t==1){
        cout << n1 << endl;
    }else{
        cout << n1 << endl << n2 << endl;
    }
    
    for(int i=1;i<=t-2;i++){
        int n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3<< endl;
    }
}

int main() {
    int n;
    cin >> n;

    sequence(n);

    return 0;
}