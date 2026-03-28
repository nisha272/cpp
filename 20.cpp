#include <iostream>
#include <iomanip> // Required for std::fixed and std::setprecision

// Function to calculate simple interest with default arguments for rate (5%) and time (2 years)
double calculateSimpleInterest(double principal, double rate = 0.05, double time = 2.0) {
    // The formula for simple interest is Principal * Rate * Time
    double interest = principal * rate * time;
    return interest;
}

int main() {
    // Example 1: User provides only the principal amount
    double principal1 = 1000.0;
    double interest1 = calculateSimpleInterest(principal1);

    std::cout << std::fixed << std::setprecision(2); // Format output to 2 decimal places

    std::cout << "Principal: $" << principal1 << std::endl;
    std::cout << "Default Rate: 5% (0.05)" << std::endl;
    std::cout << "Default Time: 2 years" << std::endl;
    std::cout << "Calculated Interest (Default): $" << interest1 << std::endl;
    std::cout << "Total Amount (Default): $" << principal1 + interest1 << std::endl;
    std::cout << std::endl;

    // Example 2: User overrides the default arguments
    double principal2 = 500.0;
    double customRate = 0.10; // 10%
    double customTime = 3.0;  // 3 years
    double interest2 = calculateSimpleInterest(principal2, customRate, customTime);

    std::cout << "Principal: $" << principal2 << std::endl;
    std::cout << "Custom Rate: 10% (0.10)" << std::endl;
    std::cout << "Custom Time: 3 years" << std::endl;
    std::cout << "Calculated Interest (Custom): $" << interest2 << std::endl;
    std::cout << "Total Amount (Custom): $" << principal2 + interest2 << std::endl;

    return 0;
}