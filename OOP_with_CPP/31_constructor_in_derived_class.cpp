// Write a cpp program in which use constructor in derived class

#include<iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "Beep beep! I'm a newly constructed Vehicle!" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    Car() {
        cout << "Vroom vroom! I'm a brand new Car, ready to hit the road!" << endl;
    }
};

int main() {
    Car myCar; // This will first call the Vehicle class constructor, then the Car class constructor
    return 0;
}

/*
Beep beep! I'm a newly constructed Vehicle!
Vroom vroom! I'm a brand new Car, ready to hit the road!
*/