# include <iostream>
// # include <conio.h>
using namespace std;

class Student {
public:
    int id;
    string name;
};
Student newS() {
    Student s;
    cout << "enter id and name _ name witout space :: ";
    cin >> s.id >> s.name;
    return s;
}
void getS(Student s) {
    cout << s.id << "\t" << s.name << endl;
}

int main() {
    Student student = newS();
    // clrscr();
    getS(student);
    // getch();
    return 0;
}

/*
enter id and name _ name witout space :: 8 janak
8       janak
*/