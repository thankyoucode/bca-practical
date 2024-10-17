# include <iostream>
// # include <conio.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    Student() {}
    Student(int sid, string sname) {
        id = sid;
        name = sname;
    }
};

int main() {
    Student s[5];
    // clrscr();
    s[0] = Student(1, "Govind");
    s[1] = Student(2, "Syama");
    s[2] = Student(3, "Harshit");
    s[3] = Student(4, "Gopi");
    s[4] = Student(5, "Bhumi");

    for (int i = 0; i < 5; i++)
    {
        cout << s[i].id << "\t" << s[i].name << endl;
    }

    // getch();
    return 0;
}

/*
1       Govind
2       Syama
3       Harshit
4       Gopi
5       Bhumi
*/