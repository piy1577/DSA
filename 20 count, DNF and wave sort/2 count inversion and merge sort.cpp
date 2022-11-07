#include <iostream>
using namespace std;
long long merge(int arr[], int n, int s, int mid, int e){
    long long inversion =0;
    int n1 = mid-s+1;
    int n2 = e-mid;
    int a[n1];
    int b[n2];
    for(int i=0; i<n1; i++){
        a[i]= arr[s+i];
    }

    for(int i=0; i<n2; i++){
        b[i] = arr[mid+1 +i];
    }

    int i=0, j=0, k=s;
    while(i<n1 && j<n2){
        if(a[i]<= b[j]){
            arr[k] = a[i];
            k++; i++;
        }else if(a[i]> b[j]){
            arr[k] = b[j];
            k++; j++;
            inversion += n1-i;
        }
    }

    while(i<n1){
        arr[k] = a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k] = b[j];
        k++; j++;
    }
    return inversion;
}

long long mergesort(int arr[], int n, int s, int e){
    long long inversion = 0;
    if(s<e){
        int mid = (s+e)/2;
        inversion += mergesort(arr, n, s, mid);
        inversion += mergesort(arr, n, mid+1, e);
        inversion += merge(arr, n, s, mid, e);
    }

    return inversion;
}
int main() {
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>> arr[i];
    }

    cout << mergesort(arr, n, 0, n-1);

    return 0;
}