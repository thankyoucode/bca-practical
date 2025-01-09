#include <iostream>
#include <string>

using namespace std;

class Order; // Forward declaration of Order

class Customer {
private:
    string customerName;
    int customerId;

public:
    Customer(string name, int id) : customerName(name), customerId(id) {}

    friend void customerOrder(Customer&, Order&);
};
class Order {
private:
    int orderId;
    double orderAmount;
public:
    Order(int id, double amount) : orderId(id), orderAmount(amount) {}
    friend void customerOrder(Customer&, Order&);
};
// Friend function definition
void customerOrder(Customer& customer, Order& order) {
    // Access private members of both classes
    cout << "Customer Name: " << customer.customerName << endl;
    cout << "Customer ID: " << customer.customerId << endl;
    cout << "Order ID: " << order.orderId << endl;
    cout << "Order Amount: $" << order.orderAmount << endl;
}

int main() {
    // Create objects of Customer (customer) and Order (order)
    Customer customer("John Doe", 123);
    Order order(456, 89.99);

    // Call the common friend function to print customer and order details
    customerOrder(customer, order);
    return 0;
}
/*
Customer Name: John Doe
Customer ID: 123
Order ID: 456
Order Amount: $89.99
*/