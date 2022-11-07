#include <iostream>
using namespace std;

int knapsap(int value[], int wt[], int n, int W){
    if(n==0||W==0){
        return 0;
    }

    if(wt[n-1]>W){
        return knapsap(value, wt, n-1, W);
    }

    return max(knapsap(value, wt, n-1, W), knapsap(value, wt, n-1, W-wt[n-1])+ value[n-1]);
}

int main() {
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};

    int W= 50;

    cout << knapsap(value, wt, 3, W)<< endl;
    return 0;
}