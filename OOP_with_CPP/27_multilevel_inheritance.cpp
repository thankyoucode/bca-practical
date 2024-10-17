#include <iostream>
using namespace std;

class GameObject {
protected:
    GameObject(string name) :name(name) {}
    void display_info() {
        cout << "I am a " << name << endl;
    }
private:
    string name;
};
class Character : private GameObject {
public:
    Character(string name, int health) : GameObject(name), health(health) {}
    void display_info() {
        GameObject::display_info();
        cout << "My health is " << health << endl;
    }
private:
    int health;
};

class Enemy : private Character {
public:
    Enemy(string name, int health, int damage) : Character(name, health), damage(damage) {}
    void display_info() {
        Character::display_info();
        cout << "My damage is " << damage << endl;
    }
private:
    int damage;
};

int main() {
    Character player("Hero", 100);
    player.display_info();
    Enemy monster("Dragon", 150, 20);
    monster.display_info();
    return 0;
}

/*
I am a Hero
My health is 100
I am a Dragon
My health is 150
My damage is 20
*/