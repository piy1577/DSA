#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int array[n];

    for(int i=0; i<n;i++){
        cin >> array[i];
    }

    int maximum = array[0];
    int minimum = array[0];

    for(int i =0;i<n; i++){
        if(array[i]>maximum){
            maximum = array[i];
        }else if(array[i]<minimum){
            minimum = array [i];
        }
    }

    cout << "Maximum number is: "<< maximum << endl;
    cout << "Minimum number is: "<< minimum << endl;

    return 0;
}