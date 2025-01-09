# include <iostream>
#include <unistd.h>
// # include <conio.h>
using namespace std;
class Game {
public:
    Game() {
        for (int i = 2; i >= 0; i--) {
            sleep(1);
            cout << "game is start in " << i << "Sec...\r";
        }
        cout << "                               ";
        cout << "\rgame is started" << endl;
        cout << "Enjoy Game :)";
    }
};
int main() {
    Game chess;
    // clrscr();
    // getch();
    return 0;
}