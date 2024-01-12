#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

// Function to check if an array is sorted in ascending order
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {  // Iterate through the array from the second element
    if (arr[i] < arr[i - 1]) {  // If any element is smaller than its previous element, it's not sorted
      return false;
    }
  }
  return true;  // If no violations found, the array is sorted
}

int main() {
  int arr[] = {2, 3, 4, 35, 6};  // Declare and initialize an array
  int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

  // Check if the array is sorted and print the result
  if (isSorted(arr, n)) {
    cout << "The array is sorted in ascending order." << endl;
  } else {
    cout << "The array is not sorted in ascending order." << endl;
  }

  return 0;  // Indicate successful program termination
}
