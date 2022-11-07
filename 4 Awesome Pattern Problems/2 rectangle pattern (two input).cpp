#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Number of Rows: ";
    cin >>r;

    cout << "Number of Columns: ";
    cin >>c;

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}