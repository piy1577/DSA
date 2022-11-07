#include <iostream>
using namespace std;
int first_occurance(int arr[],int n, int i, int k){
    if(i==n-1){
        return n+1;
    }else {
        if(arr[i]==k){
            return i;
        }else {
            return first_occurance(arr, n, i+1, k);
        }
    }
}

int last_occurance(int arr[], int n, int i, int k){
    if(i == 0){
        return n+1;
    }else {
        if(arr[i]==k){
            return i;
        }else {
            return last_occurance(arr, n, i-1, k);
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

    int k;
    cin>> k;

    int i = first_occurance(arr, n, 0, k);
    int j = last_occurance(arr, n, n-1, k);

    if(i==n+1||j==n+1){
        cout << "Number doesn't exists"<<endl;
    }else {
        cout << i << " is the first occurance position and " << j << " is the position of last occurance."<< endl;
    }

    return 0;
}