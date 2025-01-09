#include <iostream>

using namespace std;

class Person {
private:
    std::string name;
    int age;
public:
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    };
    void display() {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Age: " << this->age << std::endl;
    }
};

int main() {
    Person p("John", 30);
    p.display();
    return 0;
}

/*
Name: John
Age: 30
*/