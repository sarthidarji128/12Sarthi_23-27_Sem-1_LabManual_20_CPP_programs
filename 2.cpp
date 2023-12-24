#include <iostream>

// Function to calculate the power of a number
double power(double base, int exponent) {
    double result = 1.0;

    // Check if the exponent is positive
    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    // Check if the exponent is negative
    else if (exponent < 0) {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Get user input for base number and exponent
    std::cout << "Enter a base number: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exponent;

    // Calculate the power of the base number using the function 'power'
    double result = power(base, exponent);

    // Display the result
    std::cout << "The result is: " << result << std::endl;

    return 0;
}