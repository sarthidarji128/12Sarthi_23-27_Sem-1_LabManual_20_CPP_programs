#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    int i, j, k, l;  // Declare variables for loop counters

    // Outer loop to print the upper half of the diamond
    for (i = 1; i <= 4; i++) {
        // Print leading spaces for alignment
        for (j = 4; j >= i; j--) {
            cout << " ";
        }
        // Print increasing numbers
        for (k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }
        // Print decreasing numbers
        for (l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }
        cout << endl;  // Move to the next line
    }

    // Outer loop to print the lower half of the diamond
    for (i = 3; i >= 1; i--) {
        // Print leading spaces for alignment
        for (j = 4; j >= i; j--) {
            cout << " ";
        }
        // Print increasing numbers
        for (k = i; k <= 2 * i - 1; k++) {
            cout << k;
        }
        // Print decreasing numbers
        for (l = 2 * i - 2; l >= i; l--) {
            cout << l;
        }
        cout << endl;  // Move to the next line
    }

    return 0;  // Indicate successful program termination
}
