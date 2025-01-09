#include <iostream>
#include <string>
// #include <conio.h>
using namespace std;

class Customer {
private:
    string customerName;
    int customerId;
public:
    Customer(string name, int id) : customerName(name), customerId(id) {}
    void showDetail() {
        cout << "Name: " << customerName <<
            "\nId: " << customerId << endl;
    }
};
Customer makeCustomer() {
    string name; int id;
    cout << "enter customer ame: "; cin >> name;
    cout << "enter customer id: "; cin >> id;
    return Customer(name, id);
}
int main() {
    // clrscr();
    Customer harry = makeCustomer();
    harry.showDetail();
    // getch();
    return 0;
}
/*
enter customer ame: harshit
enter customer id: 730
Name: harshit
Id: 730
*/