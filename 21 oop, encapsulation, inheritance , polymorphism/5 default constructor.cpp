#include <iostream>
using namespace std;

class Student {

    public:
    Student(){
        cout << "Default constructor"<< endl;
    }

    Student(string s){
        cout << s << endl;
    }
};

int main() {
    Student a("Piyush");

    Student b;

    return 0;
}