#include <iostream>
using namespace std;

void Merge(int arr[], int s, int mid, int e){
    int n1 = mid-s+1;
    int n2 = e-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = arr[s+i];
    }

    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1+i];
    }

    int i=0, j=0, k=s;

    while(i<n1 && j<n2){
        
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }else{
            arr[k] =b[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
            i++;
            k++;
    }

    while(j<n2){
        arr[k] =b[j];
            j++;
            k++;
    }
}

void MergeSort(int arr[], int s, int e){
    if(s<e){
        int mid = (s+e)/2;
        MergeSort(arr, s, mid);
        MergeSort(arr, mid+1, e);

        Merge(arr, s, mid, e);
    }
}

int main() {
    int arr[] ={5, 4, 3, 2, 1};
    MergeSort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;

    return 0;
}