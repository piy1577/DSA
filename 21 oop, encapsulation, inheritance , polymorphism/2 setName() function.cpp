#include <iostream>
using namespace std;

class Student {
    string name;

    public:

    int age;
    bool gender;

    void setName(string s){
        name = s;
    }

    void print(){
        cout << "Name is: "<< name << endl;
        cout << "Age is: "<< age << endl;
        if(gender == 0){
            cout << "Gender is: Male"<< endl;
        }else {
            cout << "Gender is: Female" << endl;
        }
    }
};


int main() {
    Student arr[3];

    for(int i=0; i<3; i++){
        cout << "Name is: ";
        string s;
        cin >> s;
        arr[i].setName(s);

        cout << "Age is: ";
        cin>> arr[i].age;

        cout << "Gender is: ";
        cin >> arr[i].gender;

        cout << endl;
    }

    for(int i=0; i<3; i++){
        arr[i].print();
    }

    return 0;
}