#include <iostream>

using namespace std;

class Scripture {
public:
    virtual void allEssence() {
        cout << "Purity means the purity of mind, speech, and action." << endl;
    }
};

class Ram :public Scripture {
public:
    void allEssence() override {
        cout << "The Ramayana teaches that one should live a life of dignity and discipline by adopting certain virtues and keeping certain special things in mind." << endl;
    }
};

class Krusn :public Scripture {
public:
    void allEssence() override {
        cout << "You have a right to your actions, but never to the fruits of your actions... Therefore, do not perform actions for their results and do not be attached to inaction." << endl;
    }
};

int main() {
    Scripture* scripture;
    Ram ram;
    Krusn krusn;
    scripture = &ram;
    scripture->allEssence();
    scripture = &krusn;
    scripture->allEssence();
    return 0;
}

/*
The Ramayana teaches that one should live a life of dignity and discipline by adopting certain virtues and keeping certain special things in mind.
You have a right to your actions, but never to the fruits of your actions... Therefore, do not perform actions for their results and do not be attached to inaction.
*/