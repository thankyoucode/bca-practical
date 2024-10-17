#include <iostream>
// #include <conio.h>
using namespace std;
class SecurityHub {
    const string privateKey = "JJuCNefb5ZmBAYOV46QWM";
    const string password = "JueZOM";
    string authenticate(string userPassword) {
        if (password == userPassword) { return privateKey; }
        else { return "no"; }
    }
    friend string getKey(string password);
};
string getKey(string password) {
    SecurityHub dev;
    string result = dev.authenticate(password);
    if (result == "no") {
        cout << "Authentication failed. Incorrect password." << endl;
    }
    else {
        cout << "Authentication successful. Private key: " << result << endl;
    }
}
int main() {
    string password;
    // clrscr();
    cout << "enter password: "; cin >> password;
    getKey(password);
    // getch();
    return 0;
}
/*
enter password: JueZOM
Authentication successful. Private key: JJuCNefb5ZmBAYOV46QWM
*/