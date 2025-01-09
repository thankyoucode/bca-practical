#include <iostream> 
#include <limits>
#include <cmath>
class ProfitLossAnalysis {
public:
    // Static member function to calculate break-even point 
    static double calculateBreakEvenPoint(double fixedCost, double sellingPrice, double variableCost) { // Quadratic equation: ax^2 + bx + c = 0 
        double a = variableCost;
        double b = sellingPrice - variableCost;
        double c = -fixedCost;

        // Calculate the break-even point using the quadratic formula 
        double discriminant = b * b - 4 * a * c; if (discriminant >= 0) {
            // Real solutions represent break-even points 
            double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
            double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
            // Return the positive root as the break-even point 
            return (root1 >= 0) ? root1 : root2;
        }
        else { // No real solutions, return NaN to indicate no break - even point 
            return std::numeric_limits<double>::quiet_NaN();
        }
    }
};

int main() {
    // Example usage of the static method for break-even analysis 
    double fixedCost = 10000.0; // Fixed costs 
    double sellingPrice = 20.0; // Selling price per unit 
    double variableCost = 10.0; // Variable cost per unit 
    double breakEvenPoint = ProfitLossAnalysis::calculateBreakEvenPoint(fixedCost, sellingPrice, variableCost);
    if (!std::isnan(breakEvenPoint)) {
        std::cout << "The break-even point is: " << breakEvenPoint << " units." << std::endl;
    }
    else { std::cout << "No real break-even point exists in the given scenario." << std::endl; } return 0;
}

/* The break-even point is: 31.1267 units. */