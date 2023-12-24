#include <iostream>
using namespace std;

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        int triangle[numRows][numRows];


        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i) {
                    triangle[i][j] = 1;
                } else {
                    triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
            }
        }


        cout << "Pascal's Triangle:" << endl;
        for (int i = 0; i < numRows; ++i) {
            for (int space = 0; space < numRows - i; ++space) {
                cout << "  ";
            }

            for (int j = 0; j <= i; ++j) {
                cout << triangle[i][j] << "   ";
            }

            cout << endl;
        }
    }

    return 0;

}


// We prompt the user to enter the number of rows for Pascal's Triangle.
// We create a two-dimensional array triangle to store the values of Pascal's Triangle.
// We fill the triangle with initial values based on the rule that values at the edges of each row are 1, and other values are calculated by adding the two values directly above from the previous row.
// We then print Pascal's Triangle using nested loops. We include leading spaces for formatting to create an equilateral triangle shape.