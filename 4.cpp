#include <iostream>
using namespace std;
class Account {
public:
Account(int balance) 
{
    this->balance = balance;
}
int get_balance() 
{
    return balance;
}
void deposit(int amount) 
{
    balance += amount;
}
void withdraw(int amount) 
{
if (amount <= balance) 
{
    balance -= amount;
}
else 
{
    cout << "Insufficient funds" << endl;
}
}

private:
int balance;
};

int main() {
Account account(1000);
cout << "1. Check balance" << endl;
cout << "2. Deposit money" << endl;
cout << "3. Withdraw money" << endl;
cout << "4. Quit" << endl;

int choice;
cin >> choice;

switch (choice) 
{
    case 1:
      cout << "Your balance is ₹" << account.get_balance() << endl;
      break;
    case 2:
      cout << "How much money would you like to deposit?" << endl;
      int amount;
      cin >> amount;
      account.deposit(amount);
      cout << "Your new balance is ₹" << account.get_balance() << endl;
      break;
    case 3:
      cout << "How much money would you like to withdraw?" << endl;
      cin >> amount;
      account.withdraw(amount);
      cout << "Your new balance is ₹" << account.get_balance() << endl;
      break;
    case 4:
    cout<<"thanks for visiting";
    break;
    }
    return 0;
  }