// Write a cpp program which explain the use of a manipulators operater.
# include <iostream>
// # include <conio.h>
#include<iomanip>
using namespace std;
struct student {
    int rollno;
    char name[20], city[20], phone[11];
};
int main() {
    struct student slist[5] = {
        { 8, "Janak Chaudhary", "Yaverpura", "2111111111" },
        { 26, "Subham Dave", "Deesa", "5111111111" },
        { 30, "Kishan with all", "Sherpura", "1111111111" },
        { 78, "Suthar Dasharath", "Yaverpura", "4111111111" },
        { 79, "Suthar Krunal", "Sherpura", "3111111111" }
    };
    // clrscr();
    cout << setw(8) << "Roll No." << setw(24) << "Name"
        << setw(24) << "City" << setw(12) << "Phone No." << endl;
    cout << setw(8) << "--------" << setw(24) << "----------------------"
        << setw(24) << "----------------------" << setw(12) << "----------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << setw(4) << slist[i].rollno
            << setw(28) << slist[i].name
            << setw(24) << slist[i].city
            << setw(12) << slist[i].phone << endl;
    }
    // getch();
    return 0;
}

/*
Roll No.                    Name                    City   Phone No.
--------  ----------------------  ----------------------  ----------
   8             Janak Chaudhary               Yaverpura  2111111111
  26                 Subham Dave                   Deesa  5111111111
  30             Kishan with all                Sherpura  1111111111
  78            Suthar Dasharath               Yaverpura  4111111111
  79               Suthar Krunal                Sherpura  3111111111
*/