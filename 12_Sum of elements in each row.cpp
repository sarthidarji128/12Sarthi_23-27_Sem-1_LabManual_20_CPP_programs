#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    int rows, cols;  // Variables to store the number of rows and columns

    // Get matrix dimensions from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input validation
    if (rows <= 0 || cols <= 0) {
        cout << "Invalid input. Rows and columns should be positive integers." << endl;
        return 1;  // Indicate error
    }

    // Declare a 2D array to store the matrix
    int matrix[rows][cols];

    // Get matrix elements from the user
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
        cout << endl;  // Add a newline after each row
    }

    // Calculate and print the sum of elements in each row
    cout << "Sum of elements in each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;  // Initialize rowSum for each row
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];  // Add each element to rowSum
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;  // Print row number and sum
    }

    return 0;  // Indicate successful program termination
}
