// Write a cpp program for implementation of mathemetical operations on string
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

class MathExpression {
public:
    MathExpression(const string& expression) : expression(expression) {}

    double evaluate() {
        // Tokenize the expression using a stringstream
        stringstream ss(expression);
        string token;
        double num1 = 0, num2;
        char operator_char;

        // Extract the first number
        ss >> num1;

        // Extract the operator and subsequent numbers
        while (ss >> operator_char >> num2) {
            switch (operator_char) {
            case '+': num1 += num2; break;
            case '-': num1 -= num2; break;
            case '*': num1 *= num2; break;
            case '/':
            if (num2 == 0) { throw invalid_argument("Division by zero"); }
            num1 /= num2; break;
            default: throw invalid_argument("invalid operator");
            }
        }
        return num1;
    }
private:
    string expression;
};

int main() {
    // Golden Ration: (1 + sqrt(5)) / 2
    string expression = "1 + " + to_string(sqrt(5)) + " / 2";
    cout << expression << endl;
    MathExpression math_expression(expression);

    try {
        double result = math_expression.evaluate();
        cout << "Result: " << result << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Result: " << e.what() << endl;
    }
    return 0;
}

/*
1 + 2.236068 / 2
Result: 1.61803
*/