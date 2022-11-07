#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool Possible(vector<int> v, int m, int min){
    int studentsRequired =1, sum =0;

    for(int i=0; i<v.size();i++){
        if(v[i]> min){
            return false;
        }
        if(sum+v[i] >min){
            studentsRequired++;
            sum = v[i];

            if(studentsRequired >m){
                return false;
            }
        }else {
            sum += v[i];
        }
    }

    return true;
}

int allocateMinimum(vector<int> v, int m){
    int sum = 0;
    if(v.size() < m){
        return -1;
    }

    for(int i=0; i<v.size(); i++){
        sum += v[i];
    }

    int start = 0, end = sum, ans = INT_MAX;

    while(start <= end){
        int mid  = (start + end)/2;
        if(Possible(v, m, mid)){
            ans = min(ans, mid);
            end = mid-1;
        }
        else {
            start = mid +1;
        }
    }

    return ans;
}

int main() {
    vector <int> v = {12, 34, 67, 90};
    int students = 2;
    cout <<allocateMinimum(v, students);
    return 0;
}