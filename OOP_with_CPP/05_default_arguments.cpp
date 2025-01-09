// Write a cpp program which explian the concept of a default arguments.
# include <iostream>
// # include <conio.h>
using namespace std;

void downloadYT(char url[], unsigned int quality = 720, bool audio = true) {
    cout << "Downloading Youtube video " << url << " in " << quality << "p , "
        << (audio ? "with" : "without") << " audio." << endl;
}
int main() {
    char url[50] = "https://youtu.be/SHINoHxvTso";
    // quality option 144 | 360 | 720 | 1080
    // clrscr();
    downloadYT(url);
    downloadYT(url, 1080);
    downloadYT(url, 360, false);
    // getch();
    return 0;
}

/*
Downloading Youtube video https://youtu.be/SHINoHxvTso in 720p , with audio.
Downloading Youtube video https://youtu.be/SHINoHxvTso in 1080p , with audio.
Downloading Youtube video https://youtu.be/SHINoHxvTso in 360p , without audio.
*/