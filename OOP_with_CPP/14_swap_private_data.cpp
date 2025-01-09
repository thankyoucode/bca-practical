#include <iostream>
class BOB; // Forward declaration
class SBI {
private:
    int dataA;
public:
    SBI(int val) : dataA(val) {}
    void swapAmount(BOB& bob);
    int getAmount() const { return dataA; }
};
class BOB {
private:
    int dataB;
public:
    BOB(int val) : dataB(val) {}
    friend void SBI::swapAmount(BOB& bob);
    int getAmount() const { return dataB; }
};
void SBI::swapAmount(BOB& bob) {
    std::swap(dataA, bob.dataB);
}
int main() {
    SBI sbi(10);
    BOB bob(20);
    std::cout << "Before swapping - SBI: " << sbi.getAmount() << ", BOB: " << bob.getAmount() << std::endl;
    sbi.swapAmount(bob);
    std::cout << "After swapping - SBI: " << sbi.getAmount() << ", BOB: " << bob.getAmount() << std::endl;
    return 0;
}

/*
Before swapping - SBI: 10, BOB: 20
After swapping - SBI: 20, BOB: 10
*/