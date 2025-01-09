#include <iostream>
// # include <conio.h>
using namespace std;
class Emp {
    string empName;
public:
    Emp(string name) :empName(name) {
        cout << empName << " Welcome, your registration conform." << endl;
    }
    string devName() {
        return "dev name is: " + empName;
    }
};
int main() {
    Emp microsoft("Kishan");
    Emp google(microsoft);
    Emp OpenAI = google;
    cout << "From microsoft " << microsoft.devName() << endl;
    cout << "From google " << google.devName() << endl;
    cout << "From OpenAI " << OpenAI.devName() << endl;
    // getch();
    return 0;
}

/*
Kishan Welcome, your registration conform.
From microsoft dev name is: Kishan
From google dev name is: Kishan
From OpenAI dev name is: Kishan
*/