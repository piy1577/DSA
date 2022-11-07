#include <iostream>
using namespace std;

class student
{
    string name;
    int rollno;
    string Department;

public:
    void read();
    void display();
};

void student::read()
{
    cin >> name >> rollno >> Department;
}

void student::display()
{
    cout << "Name: " << name << "\nRoll no: 21BCS" << rollno << "\nDepartment: "
         << Department << endl;
}

int main()
{
    student student1, student2, student3, student4, student5;
    cout << "Enter details of Student 1: ";
    student1.read();
    cout << "Enter details of Student 2: ";
    student2.read();
    cout << "Enter details of Student 3: ";
    student3.read();
    cout << "Enter details of Student 4: ";
    student4.read();
    cout << "tnter details of Student 5: ";
    student5.read();

    cout << "Details of Student 1 are: ";
    student1.display();
    cout << "Details of Student 2 are: ";
    student2.display();
    cout << "Details of Student 3 are: ";
    student3.display();
    cout << "Detalis of Studnet 4 are: ";
    student4.display();
    cout << "Details of Studnet 5 are: ";
    student5.display();
    return 0;
}