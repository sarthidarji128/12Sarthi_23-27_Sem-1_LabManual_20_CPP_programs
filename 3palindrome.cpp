#include <iostream>  // Include header for input/output operations
#include <algorithm> // Include header for algorithms like transform
using namespace std;  // Bring the std namespace into scope

bool isPalindrome(string str) {
  // Convert string to lowercase for case-insensitive comparison
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  int start = 0;  // Pointer to the beginning of the string
  int end = str.length() - 1;  // Pointer to the end of the string

  // Iterate through the string from both ends
  while (start < end) {
    if (str[start] != str[end]) {  // If characters don't match, it's not a palindrome
      return false;
    }
    start++;  // Move pointers towards the middle
    end--;
  }

  // If all characters matched, it's a palindrome
  return true;
}

int main() {
  string str;  // Declare a string variable

  // Get input string from the user
  cout << "Enter a string: ";
  cin >> str;

  // Check if the string is a palindrome and print the result
  if (isPalindrome(str)) {
    cout << "The given string is a palindrome." << endl;
  } else {
    cout << "The given string is not a palindrome." << endl;
  }

  return 0;  // Indicate successful program termination
}
