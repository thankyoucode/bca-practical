#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
public:
    Employee(std::string name) : name(name) {}
    virtual void displayInfo() {
        std::cout << "Employee Name: " << name << std::endl;
    }
};

class PaymentInfo {
public:
    PaymentInfo() {}
    // PaymentInfo related methods
};

class FulltimeEmployee : public Employee, public PaymentInfo {
private:
    double salary;
public:
    FulltimeEmployee(std::string name, double salary) : Employee(name), salary(salary) {}
    void displayInfo() override {
        Employee::displayInfo();
        std::cout << "Salary: " << salary << std::endl;
    }
};
class ParttimeEmployee : public Employee {
private:
    double hourlyRate;
public:
    ParttimeEmployee(std::string name, double hourlyRate) : Employee(name), hourlyRate(hourlyRate) {}
    void displayInfo() override {
        Employee::displayInfo();
        std::cout << "Hourly Rate: " << hourlyRate << std::endl;
    }
};
int main() {
    FulltimeEmployee fulltime("Jen Gentleman", 50000);
    ParttimeEmployee parttime("Per Borgen", 20);

    fulltime.displayInfo();
    parttime.displayInfo();

    return 0;
}

/*
Employee Name: Jen Gentleman
Salary: 50000
Employee Name: Per Borgen
Hourly Rate: 20
*/