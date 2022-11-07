#include <iostream>
using namespace std;

int search(int arr[], int n, int key, int left, int right){
    if(left > right){
        return -1;
    }

    int mid = (left +right)/2;

    if(arr[mid] ==key){
        return mid;
    }


    if(arr[left] <= arr[mid]){
        if(arr[mid]> key){
            return search(arr, n, key, left, mid -1);
        }else {
            return search(arr, n, key, mid+1, right);
        }
    }else {
        if(arr[mid]> key){
            return search(arr, n, key, mid +1, right);
        }
    }

    return search(arr, n, key, left, mid-1);
}

int main() {
    int arr[] = {6, 7, 8, 9, 10, 1, 2, 5};
    int n = 8;
    int key = 8;

    cout << search(arr, n, key, 0, 7);
    return 0;
}