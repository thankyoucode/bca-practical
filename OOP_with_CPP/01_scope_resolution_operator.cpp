// Write a cpp program which explain the use of a scope resolution operator.
# include <iostream>
// # include <conio.h>
using namespace std;
int code = 1;           // Globle code
int main() {
    int code = 2;       // Globle code of main
    // clrscr();
    if (::code < code) {
        cout << ::code << " < " << code << endl;
        int code = 4;   // local code of main > if
        cout << "local code of main > if block : " << code << endl;
    }
    cout << "Main code : " << code << endl;
    cout << "Globel code :: " << ::code << endl;
    // getch();
    return 0;
}


/*
1 < 2
local code of main > if block : 4
Main code : 2
Globel code :: 1
*/