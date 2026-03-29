#include <iostream>
using namespace std;

// Function definition with default arguments for rate (5% or 0.05) and time (2 years)
float calculateSimpleInterest(float principal, float rate = 0.05f, float time = 2.0f) {
    // The formula for Simple Interest is (Principal * Rate * Time)
    float simpleInterest = principal * rate * time;
    return simpleInterest;
}

int main() {
    // Example 1: Calling the function with only the principal amount.
    // It uses the default rate (0.05) and time (2.0).
    float principalAmount = 1000.0f;
    float interest1 = calculateSimpleInterest(principalAmount);

    cout << "Principal: " << principalAmount << endl;
    cout << "Rate: 5% (default)" << endl;
    cout << "Time: 2 years (default)" << endl;
    cout << "Simple Interest (default args): $" << interest1 << endl;

    cout << endl; // Add a new line for better formatting

    // Example 2: Calling the function and overriding the default arguments.
    float principalAmount2 = 500.0f;
    float newRate = 0.10f; // 10%
    float newTime = 5.0f;

    float interest2 = calculateSimpleInterest(principalAmount2, newRate, newTime);

    cout << "Principal: " << principalAmount2 << endl;
    cout << "Rate: " << newRate * 100 << "% (custom)" << endl;
    cout << "Time: " << newTime << " years (custom)" << endl;
    cout << "Simple Interest (custom args): $" << interest2 << endl;

    return 0;
}