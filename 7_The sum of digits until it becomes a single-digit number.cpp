#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    int num;  // Declare a variable to store the input number

    cout << "Enter a number: ";  // Prompt the user to enter a number
    cin >> num;  // Read the input number from the user

    // Iterate until the number becomes a single digit
    while (num >= 10) {
        int sum = 0;  // Variable to store the sum of digits

        // Calculate the sum of digits of the current number
        while (num > 0) {
            // Extract the last digit using modulo and add it to the sum
            sum += num % 10;
            // Remove the last digit using integer division
            num /= 10;
        }

        // Update the number with the calculated sum
        num = sum;
    }

    // Print the final single-digit sum
    cout << "The sum of digits until it becomes a single-digit number is: " << num << endl;

    return 0;  // Indicate successful program termination
}
