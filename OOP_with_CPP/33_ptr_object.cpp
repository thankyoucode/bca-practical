// write a cpp program of initialization pointer to object
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;
    Person(const string& n, int a) : name(n), age(a) {}
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person[2] = {
        {"Alice", 25},
        {"Horid", 23}
    };
    ofstream file("person.txt", ios::app);
    if (file.is_open()) {
        for (const auto& p : person) {
            p.display();
            file << "Name: " << p.name << ", Age: " << p.age << endl;
        }
        file.close();
        cout << "Data written to file." << endl;
    }
    else {
        cout << "Unable to open file." << endl;
    }
    return 0;
}

/*
Name: Alice, Age: 25
Name: Horid, Age: 23
Data written to file.
*/