# include <iostream>
// # include <conio.h>
using namespace std;

int add(int a, int b) { return a + b; }
int add(int a, int b, int c) { return a + b + c; }
string add(const string& str1, const string& str2) {
    return str1 + str2;
}

int main() {
    // clrscr();
    cout << "adding two number: " << add(222, 333) << endl;
    cout << "adding three number: " << add(222, 333, 444) << endl;
    cout << "adding two string: " << add("Jay, Jay ", "Shree Ram") << endl;
    // getch();
    return 0;
}

/*
adding two number: 555
adding three number: 999
adding two string: Jay, Jay Shree Ram
*/