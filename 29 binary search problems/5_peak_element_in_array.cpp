#include <iostream>
using namespace std;

int findPeak(int arr[], int n, int left, int right){
    if(left > right){
        return -1;
    }

    int mid = (left+ right)/2;

    if(arr[mid]> arr[mid -1] && arr[mid] > arr[mid +1]){
        return mid;
    }

    if(mid ==0 && arr[mid]>= arr[mid +1] || mid == n-1 && arr[mid]>= arr[mid -1]){
        return mid;
    }

    if(arr[mid] < arr[mid -1] ){
        return findPeak(arr, n, left, mid -1);
    }
    return findPeak(arr, n, mid +1, right);
}

int main() {
    int arr[] = {0, 6, 8, 5, 7, 9};
    int n =6;

    cout<< findPeak(arr, n, 0, 5);
    return 0;
}