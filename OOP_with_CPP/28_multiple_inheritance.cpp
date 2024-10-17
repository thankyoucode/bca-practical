#include <iostream>
#include <string>
using namespace std;

class Computer {
public:
    Computer(string processor, string memory) : processor(processor), memory(memory) {}
    void display_info() {
        cout << "Processor: " << processor << endl
            << "Memory: " << memory << endl;
    }
private:
    string processor, memory;
};
class AI {
public:
    AI(string algorithm) : algorithm(algorithm) {}
    void run_algorithm() {
        cout << "Running AI algorithm: " << algorithm << endl;
    }
private: string algorithm;
};

class SmartComputer : public Computer, public AI {
public:
    SmartComputer(string processor, string memory, string algorithm) :Computer(processor, memory), AI(algorithm) {}
    void start() {
        cout << "Smart computer with:" << endl;
        Computer::display_info();
        AI::run_algorithm();
    }
};

int main() {
    SmartComputer myComputer("Intel Core i7", "16GB", "Neural Network");
    myComputer.start();
    return 0;
}

/*
Smart computer with:
Processor: Intel Core i7
Memory: 16GB
Running AI algorithm: Neural Network
*/