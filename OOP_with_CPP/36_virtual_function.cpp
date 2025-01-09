#include <iostream>

using namespace std;

class Shape {
public:
    virtual void drow() {
        cout << "Drowing a shape." << endl;
    }
};

class Circle :public Shape {
public:
    void drow() {
        cout << "Drowing a circle." << endl;
    }
};

class Square :public Shape {
public:
    void drow() {
        cout << "Drowing a square." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    shape1->drow();
    shape2->drow();
    return 0;
}

/*
Drowing a circle.
Drowing a square.
*/