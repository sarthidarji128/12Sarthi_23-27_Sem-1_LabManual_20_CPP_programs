#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    int N;  // Declare a variable to store the number of terms

    cout << "Enter the value of N: ";  // Prompt the user to enter N
    cin >> N;  // Read the value of N from the user

    double sum = 0.0;  // Variable to store the sum of the series
    double factorial = 1.0;  // Variable to store factorials

    // Loop from 1 to N to calculate each term and add to the sum
    for (int i = 1; i <= N; i++) {
        factorial *= i;  // Calculate the factorial of i (i!)
        sum += (i / factorial);  // Calculate the ith term (i/i!) and add to the sum
    }

    cout << "Sum of the series is: " << sum << endl;  // Print the final sum

    return 0;  // Indicate successful program termination
}
