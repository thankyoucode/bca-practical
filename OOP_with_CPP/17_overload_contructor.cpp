#include <iostream>
// # include <conio.h>
using namespace std;
class Game {
    string gameName;
public:
    Game() {
        cout << "game is started" << endl;
    }
    Game(string name) {
        gameName = name;
        cout << gameName << " is started" << endl;
    }
};
int main() {
    Game chess;
    Game cricket("IPL");
    // getch();
    return 0;
}

/*
game is started
IPL is started
*/