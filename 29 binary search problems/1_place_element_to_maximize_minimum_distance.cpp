#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool feasible(int mid, int n, int v[], int k){
    int pos = v[0], element =1;

    for(int i=1; i<n; i++){
        if(v[i]- pos >= mid){
            pos= v[i];
            element++;
            if(element == k){
                return true;
            }
        }
    }
    
    return false;
}

int problem_1(int v[], int n, int k){
    sort(v , v +n);

    int result =-1;
    int left = 1, right = v[n-1];

    while(left < right){
        int mid = (left +right)/2;

        if(feasible(mid,n,  v, k)){
            result = max(result, mid);
            left = mid +1;
        }else {
            right = mid;
        }
    }

    return result;
}

int main() {
    int v[] ={1, 2, 8, 4, 9};

    cout << problem_1(v,5, 3);
    return 0;
}