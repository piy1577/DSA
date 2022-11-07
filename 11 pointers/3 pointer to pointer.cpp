#include <iostream>
using namespace std;

int main(){
    int a =10;

    int *p = &a;

    int **q = &p;

    cout << *q << " : Location of variable a"<<endl;

    cout << **q << " : value of variable a"<< endl;
    return 0;
}