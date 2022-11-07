#include <iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}

int partition(int arr[] ,int s ,int e){
    int pivot = arr[e];
    int i=s-1;
    for(int j=s; j<e; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, e);
    return i+1;
}

void quicksort(int arr[] , int s, int e){
    if(s<e){
        int pi = partition(arr, s, e);
        quicksort(arr, s , pi-1);
        quicksort(arr, pi+1, e);
    }
}

int main() {
    int arr[] = {6, 3, 5, 2, 9, 8, 7};
    quicksort(arr, 0, 6);
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}