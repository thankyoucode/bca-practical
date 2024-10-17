// write full program of virtual base class in cpp

#include<iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void print() {
        cout << "Opening the main door to the world of C++!" << endl;
    }
};

// Derived class
class Derived : public virtual Base {
public:
    void print() override {
        cout << "Welcome to the journey of C++ programming!" << endl;
    }
};

int main() {
    Base* basePtr; // Base class pointer
    Derived derivedObj; // Derived class object

    basePtr = &derivedObj; // Point basePtr to derivedObj

    // Virtual function, binded at runtime (Runtime polymorphism)
    basePtr->print();

    return 0;
}

/*
Welcome to the journey of C++ programming!
*/