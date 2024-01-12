#include <iostream>  // Include header for input/output operations
using namespace std;  // Bring the std namespace into scope

class Account {  // Class representing a bank account
public:
    // Constructor to initialize balance
    Account(int balance) {
        this->balance = balance;  // Set the initial balance
    }

    // Function to get the account balance
    int get_balance() {
        return balance;
    }

    // Function to deposit money into the account
    void deposit(int amount) {
        balance += amount;  // Add the amount to the balance
    }

    // Function to withdraw money from the account
    void withdraw(int amount) {
        if (amount <= balance) {  // Check for sufficient funds
            balance -= amount;  // Deduct the amount from the balance
        } else {
            cout << "Insufficient funds" << endl;  // Error message if insufficient funds
        }
    }

private:
    int balance;  // Private member to store the account balance
};

int main() {
    Account account(1000);  // Create an Account object with initial balance of 1000

    // Display a menu of options for the user
    cout << "1. Check balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Quit" << endl;

    int choice;
    cin >> choice;  // Get the user's choice

    switch (choice) {
        case 1:
            cout << "Your balance is ₹" << account.get_balance() << endl;  // Display balance
            break;
        case 2:
            cout << "How much money would you like to deposit?" << endl;
            int amount;
            cin >> amount;  // Get deposit amount
            account.deposit(amount);  // Deposit the amount
            cout << "Your new balance is ₹" << account.get_balance() << endl;  // Display updated balance
            break;
        case 3:
            cout << "How much money would you like to withdraw?" << endl;
            cin >> amount;  // Get withdrawal amount
            account.withdraw(amount);  // Attempt withdrawal
            cout << "Your new balance is ₹" << account.get_balance() << endl;  // Display updated balance
            break;
        case 4:
            cout << "Thanks for visiting" << endl;  // Exit message
            break;
        default:
            cout << "Invalid choice" << endl;  // Handle invalid choices
    }

    return 0;  // Indicate successful program termination
}
