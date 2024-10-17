# include <iostream>
#include <unistd.h>
// # include <conio.h>
using namespace std;
class Game {
public:
    string* gamename_;
    Game(string gamename) :gamename_(&gamename) {
        cout << *gamename_ << " game is started" << endl;
        cout << "Enjoy Game :) play time only 30sec" << endl;
        sleep(30);
    }
    ~Game() {
        cout << "Thanks to play " << *gamename_ << endl;
    }
};
int main() {
    Game chess("Chess");
    // clrscr();
    // getch();
    return 0;
}

/*
Chess game is started
Enjoy Game :) play time only 30sec
Thanks to play Chess
*/