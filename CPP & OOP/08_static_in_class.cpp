#include<iostream>
# include<string>
// # include <conio.h>

using namespace std;
class PhoneCall {
    int64_t number;
    string name;
public:
    static int callcount;
    PhoneCall(string caller, int64_t callno) {
        name = caller; number = callno;
        callcount++;
        cout << "Talking with -- " << number << endl;
    }
};
int PhoneCall::callcount = 0;
int main() {
    // clrscr();
    cout << "connection" << endl;
    PhoneCall call1("Janak Chaudhary", 1111111111);
    PhoneCall call2("Subham Dave", 2111111111);
    cout << "Total call on your phone " << call2.callcount << endl;
    PhoneCall call3("Kishan", 3111111111);
    PhoneCall call4("Suthar Dasharath", 4111111111);
    PhoneCall call5("Suthar Krunal", 5111111111);
    cout << "Total call on your phone " << PhoneCall::callcount << endl;
    // getch();
    return 0;
}

/*
connection
Talking with -- 1111111111
Talking with -- 2111111111
Total call on your phone 2
Talking with -- 3111111111
Talking with -- 4111111111
Talking with -- 5111111111
Total call on your phone 5
*/