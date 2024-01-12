#include <iostream>  // Include header for input/output operations
#include <string>   // Include header for string manipulation
#include <algorithm> // Include header for the sort function

using namespace std;  // Bring the std namespace into scope

int main() {  // Main function where program execution begins

    const int size = 4;  // Declare a constant for the array size
    string arr[size];    // Declare an array to store the strings

    cout << "Enter " << size << " strings:" << endl;  // Prompt the user to enter strings

    // Get input strings from the user
    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Read each string into the array
    }

    sort(arr, arr + size);  // Sort the array alphabetically using the std::sort function

    cout << "Strings in alphabetical order:" << endl;

    // Print the sorted strings
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;  // Indicate successful program termination
}
