#include <iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void DNFsort(int arr[], int low, int mid, int high){
    if(mid==high){
        return;
    }
    if(arr[mid]==0){
        swap(arr, mid, low);
        DNFsort(arr, low+1, mid+1, high);
    }else if(arr[mid]==1){
        DNFsort(arr, low, mid+1, high);
    }else {
        swap(arr, high, mid);
        DNFsort(arr, low, mid+1, high-1);
    }
}

int main() {
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    DNFsort(arr, 0, 0, n-1);

    for(int i=0; i<n;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}