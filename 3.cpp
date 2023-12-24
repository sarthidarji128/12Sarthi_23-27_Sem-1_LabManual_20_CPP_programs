#include <iostream>
#include <string>
using namespace std;


int main()
{
string input;
cout << "Enter a string: ";
cin >> input;
string reversed = input;
string(reversed.begin(), reversed.end());
if (input == reversed)
{
cout<<"The string is a palindrome." <<endl;
}
else
{
cout<<"The string is not a palindrome." <<endl;
}
return 0;
}