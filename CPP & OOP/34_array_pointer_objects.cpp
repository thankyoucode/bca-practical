#include <iostream>

using namespace std;

class Person {
public:
    string name;
    int age;
};


int main() {
    Person* team[3] = {
        new Person{ "Alice", 25 },
        new Person{ "Bob", 30 },
        new Person{ "Smith", 34 }
    };
    cout << "The names and ages of the persons" << endl;

    for (int i = 0; i < 3; i++) {
        cout << team[i]->name << " (" << team[i]->age << ")" << endl;
    }
    for (int i = 0; i < 3; i++) {
        delete team[i];
    }
    return 0;
}

/*
The names and ages of the persons
Alice (25)
Bob (30)
Smith (34)
*/