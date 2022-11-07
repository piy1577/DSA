#include <iostream>
using namespace std;

bool check(int arr[], int n, int i){
    if(i==n-1){
        return true;
    }else {
        if(arr[i]<arr[i+1]){
            return check(arr, n , i+1);
        }else {
            return false;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(check(arr, n, 0)==true){
        cout << "Array is sorted"<< endl;
    }else {
        cout << "Array is not sorted"<< endl;
    }

    return 0;
}