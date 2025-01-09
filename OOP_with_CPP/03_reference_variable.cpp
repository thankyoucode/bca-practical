# include <iostream>
// # include <conio.h>
using namespace std;

void sum (int& a, int& b) {
    a = a + b;
}

int main() {
    int a = 10, b = 20;
    // clrscr();
    cout << "a:" << a << " + " << "b:" << b << " = ";
    sum(a, b);
    cout << "a:" << a;
    // getch();
    return 0;
}

// a:10 + b:20 = a:30