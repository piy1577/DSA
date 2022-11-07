#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    bool gender;

    void print(){
        cout << name << endl;
        cout << age << endl;
        if(gender ==0){
            cout << "Male"<< endl;
        }else {
            cout << "Female"<< endl;
        }
        cout << endl;
    }
};

int main() {
    Student arr[3];

    for(int i=0; i<3; i++){
        cout << "Name is: ";
        cin >>arr[i].name;

        cout << "Age: ";
        cin >> arr[i].age;

        cout << "Gender: ";
        cin >> arr[i].gender;

        cout << endl;
    }

    for(int i=0; i<3;i++){
        arr[i].print();
    }
    return 0;
}