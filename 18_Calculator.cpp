#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

class Calculator {
public:
    // Static methods for arithmetic operations
    static double add(double a, double b) { return a + b; }
    static double subtract(double a, double b) { return a - b; }
    static double multiply(double a, double b) { return a * b; }
    static double divide(double a, double b) {
        if (b == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    double num1, num2;  // Variables to store numbers
    char operation;    // Variable to store the operation

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Perform the selected operation using a switch statement
    switch (operation) {
        case '+':
            cout << "The sum is " << Calculator::add(num1, num2) << "." << endl;
            break;
        case '-':
            cout << "The difference is " << Calculator::subtract(num1, num2) << "." << endl;
            break;
        case '*':
            cout << "The product is " << Calculator::multiply(num1, num2) << "." << endl;
            break;
        case '/':
            try {
                cout << "The quotient is " << Calculator::divide(num1, num2) << "." << endl;
            } catch (const invalid_argument& e) {
                cerr << e.what() << endl;  // Output error message if division by zero
            }
            break;
        default:
            cerr << "Invalid operation." << endl;
    }

    return 0;  // Indicate successful program termination
}
