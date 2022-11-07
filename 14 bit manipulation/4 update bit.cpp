#include <iostream>
using namespace std;

int update_bit(int n, int i, int z){
    if(z==1){
        return (n|(1<<i));
    }else if(z==0){
        return (n&~(1<<i));
    }
}

int main() {
    int n, i , z;
    cin >> n>> i  >> z;

    cout << update_bit(n, i , z);
    return 0;
}