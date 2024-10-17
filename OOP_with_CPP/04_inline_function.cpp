# include <iostream>
// # include <conio.h>
using namespace std;

inline int max(int a, int b) { return a > b ? a : b; }
inline int min(int a, int b) { return a < b ? a : b; }
inline void swap(int& a, int& b) {
    cout << "\t------|swaping|------" << endl;
    a = a ^ b; b = a ^ b; a = a ^ b;
}
inline void display(int& a, int& b) {
    cout << "number 1 : " << a << "\t\tnumber 2 : " << b << endl;
}

int main() {
    int x = 22, y = 333;
    // clrscr();
    display(x, y); swap(x, y); display(x, y);
    cout << "\nMax : " << max(x, y)
        << "\t\tMin : " << min(x, y) << endl;
    // getch();
    return 0;
}

/*
number 1 : 22           number 2 : 333
        ------|swaping|------
number 1 : 333          number 2 : 22

Max : 333               Min : 22
*/