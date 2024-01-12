#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    // Declare variables
    float marks[5];  // Array to store marks of 5 subjects
    float sub1, sub2, sub3, sub4, sub5;  // Individual subject marks
    float average = 0;  // Variable to store the average

    // Get marks for each subject from the user
    cout << "Enter marks of subject 1: ";
    cin >> sub1;
    cout << "Enter marks of subject 2: ";
    cin >> sub2;
    cout << "Enter marks of subject 3: ";
    cin >> sub3;
    cout << "Enter marks of subject 4: ";
    cin >> sub4;
    cout << "Enter marks of subject 5: ";
    cin >> sub5;

    // Calculate the average
    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    // Determine the grade based on the average
    if (average >= 90) {
        cout << "Grade = A";
    } else if (average >= 80) {
        cout << "Grade = B";
    } else if (average >= 70) {
        cout << "Grade = C";
    } else if (average >= 60) {
        cout << "Grade = D";
    } else {
        cout << "Grade = F";
    }

    return 0;  // Indicate successful program termination
}
