#include <iostream>
using namespace std;

int power(int x, int y){
    int p=1;
    for(int i=1;i<=y;i++){
        p*=x;
    }
    return p;
}


int main() {
    int n;
    cin >>n;
    int original = n;
    int armstrong =0;

    while(n>=1){
        int lastdigit = n%10;
        armstrong += power(lastdigit, 3);
        n/=10;
    }

    if(original == armstrong){
        cout <<"Armstrong"<< endl;
    }else {
        cout << "not Armstrong"<< endl;
    }

    return 0;
}