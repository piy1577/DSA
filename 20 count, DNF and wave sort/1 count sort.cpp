#include <iostream>
#include <climits>
using namespace std;
int max(int arr[], int n){
    int maximum =INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }

    return maximum;
}

int count(int arr[], int n, int i){
    int count=0;
    for(int j=0; j<n;j++){
        if(arr[j]==i){
            count++;
        }
    }

    return count;
}

void countsort(int arr[] ,int n, int max){
    int countArray[max];
    for(int i=0; i<=max; i++){
        countArray[i]= count(arr, n, i);
    }
    
    int k=0;
    for(int i=0; i<=max; i++){
        for(int j=0; j<countArray[i]; j++){
            arr[k]= i;
            k++;
        }
    }
}
int main(){
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int maximum = max(arr, 9);
    countsort(arr, 9, maximum);

    for(int i=0; i<9;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}