#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    int rows = 6;  // Set the number of rows for the pattern
    int cols = 6;  // Set the number of columns for the pattern

    // Outer loop to iterate through each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop to iterate through each column
        for (int j = 1; j <= cols; j++) {
            // Check if the current position is on the boundary of the pattern
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";  // Print a star for boundary positions
            } else {
                cout << " ";  // Print a space for inner positions
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;  // Indicate successful program termination
}
