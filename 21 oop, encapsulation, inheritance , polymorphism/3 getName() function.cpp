#include <iostream>
using namespace std;

class Student{
    string name;
    public:

    void setName(string s){
        name = s;
    }

    void getName(){
        cout << name << endl;
    }
};

int main() {
    Student arr[3];

    for(int i=0;i<3;i++){
        string s;
        cin >> s;
        arr[i].setName(s);
    }

    for(int i=0; i<3;i++){
        arr[i].getName();
    }

    return 0;
}