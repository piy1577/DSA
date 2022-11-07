#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    int i=0;
    bool check[n];
    for(int i=0; i<n; i++){
        check[i] = false;
    }

    for(int i=0; i<n; i++){
        if(arr[i]>=0&&arr[i]<n){
            check[arr[i]]=true;
        }
    }

    for(int i=0; i<n; i++){
        if(check[i]==false){
            cout << i;
            break;
        }
    }

    return 0;
}