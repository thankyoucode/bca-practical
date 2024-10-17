#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
public:
    int roll_number;
    float marks;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student_object;
    student_object.name = "John Doe";
    student_object.roll_number = 30;
    student_object.marks = 95.5;
    student_object.display();
    return 0;
}
/*
Name: John Doe
Roll Number: 30
Marks: 95.5
*/