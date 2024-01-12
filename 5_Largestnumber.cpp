#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    double num1, num2, num3;  // Declare variables to store three numbers

    // Prompt user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;  // Read input numbers from the user

    // Nested if-else statements to determine the largest number
    if (num1 >= num2) {  // Check if num1 is greater than or equal to num2
        if (num1 >= num3) {  // If num1 is also greater than or equal to num3, it's the largest
            cout << "The largest number is: " << num1 << endl;
        } else {  // Otherwise, num3 is the largest
            cout << "The largest number is: " << num3 << endl;
        }
    } else {  // If num1 is not the largest, either num2 or num3 is
        if (num2 >= num3) {  // Check if num2 is greater than or equal to num3
            cout << "The largest number is: " << num2 << endl;
        } else {  // Otherwise, num3 is the largest
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;  // Indicate successful program termination
}
