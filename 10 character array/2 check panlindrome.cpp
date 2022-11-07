#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char arr[n+1];
    cin >> arr;

    int s=0;
    int e = n-1;
    bool flag= true;

    while(s!=e){
        if(arr[s]!= arr[e]){
            flag = false;
            break;
        }else {
            s++;
            e--;
        }
    }

    if(flag){
        cout << "name is panlindrome"<< endl;
    }else {
        cout <<"name is not palindrome"<< endl;
    }

    return 0;
}