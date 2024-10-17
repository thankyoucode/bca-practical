# include <iostream>
# include <iomanip>
// # include <conio.h>
using namespace std;
const int SHOP_LIMIT = 5;

class Item {
public:
    string name;
    int id;
    void show() {
        cout << setw(4) << id << setw(20) << name << endl;
    }
};

class Shop {
    Item item[SHOP_LIMIT];
    int count = 0;
    int idSet(int id) {
        for (int i = 0; i < count; i++) {
            if (item[i].id == id) { return i + 1; }
        }
        return 0;
    }
    void swap(Item& item1, Item& item2) {
        Item store = item1; item1 = item2; item2 = store;
    }
public:
    void add(int id, string name) {
        if (count == SHOP_LIMIT) {
            cout << "Stock is Full ! Welcome next time " << name << endl;
        }
        else if (!idSet(id)) {
            item[count].id = id;
            item[count++].name = name;
            cout << setw(11) << "Added < "; item[count - 1].show();
        }
        else {
            cout << name << " try adding with another id, id:" << id << " is set here." << endl;
        }
    }
    void remove(int id) {
        if (int index = idSet(id)) {
            cout << setw(11) << "removed! > "; item[--index].show();
            if ((index) != --count) { swap(item[index], item[count]); }
            return;
        }
        cout << id << " : id item is not here." << endl;
    }
    void display() {
        cout << endl << setw(4) << "| ID |" << setw(20) << "| Name |" << endl;
        for (int i = 0; i < count; i++) { item[i].show(); }
        cout << endl;
    }
};

int main() {
    Shop hiphone;
    // clrscr();
    hiphone.add(5, "Samsung");
    hiphone.add(3, "LAVA");
    hiphone.add(10, "Apple");
    hiphone.add(7, "OPPO");
    hiphone.add(1, "OnePlus");
    hiphone.add(7, "VIVO");
    hiphone.add(4, "MOTORola");
    hiphone.display();
    hiphone.remove(3);
    hiphone.remove(99);
    hiphone.remove(88);
    hiphone.add(4, "MOTORola");
    hiphone.display();
    // getch();
    return 0;
}

/*
   Added <    5             Samsung
   Added <    3                LAVA
   Added <   10               Apple
   Added <    7                OPPO
   Added <    1             OnePlus
Stock is Full ! Welcome next time VIVO
Stock is Full ! Welcome next time MOTORola

| ID |            | Name |
   5             Samsung
   3                LAVA
  10               Apple
   7                OPPO
   1             OnePlus

removed! >    3                LAVA
99 : id item is not here.
88 : id item is not here.
   Added <    4            MOTORola

| ID |            | Name |
   5             Samsung
   1             OnePlus
  10               Apple
   7                OPPO
   4            MOTORol
*/