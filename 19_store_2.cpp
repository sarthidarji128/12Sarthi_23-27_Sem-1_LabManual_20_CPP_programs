#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string name;
    double price;
    int quantity;

    // Simulate adding a product to the cart using a counter
    void addProduct() {
        quantity++;
        cout << "Added " << name << " to cart." << endl;
    }

    // Display product details
    void displayProduct() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price<<"₹"<< endl;
        cout << "Quantity in cart: " << quantity << endl;
    }
};

int main() {
    // Individual products (no vector)
    Product book = {"Book", 1599, 0};
    Product pen = {"Redbull", 250, 0};
    Product notebook = {"Notebook", 799, 0};

    int choice;
    char addMore;

    do {
        cout << "\nOnline Shop:" << endl;
        cout << "1. Display Products" << endl;
        cout << "2. Add Product to Cart" << endl;
        cout << "3. View Cart" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Display available products
                cout << "1. Book" << endl;
                cout << "2. Pen" << endl;
                cout << "3. Notebook" << endl;
                break;
            case 2:
                int productIndex;
                cout << "Enter product number to add: ";
                cin >> productIndex;
                if (productIndex >= 1 && productIndex <= 3) {
                    switch (productIndex) {
                        case 1:
                            book.addProduct();
                            break;
                        case 2:
                            pen.addProduct();
                            break;
                        case 3:
                            notebook.addProduct();
                            break;
                    }
                } else {
                    cout << "Invalid product number." << endl;
                }
                break;
            case 3:
                // Display cart contents
                cout << "\nCart Items:" << endl;
                if (book.quantity > 0) {
                    book.displayProduct();
                }
                if (pen.quantity > 0) {
                    pen.displayProduct();
                }
                if (notebook.quantity > 0) {
                    notebook.displayProduct();
                }
                break;
            default:
                cout << "Invalid choice." << endl;
        }

        cout << "\nAdd more products? (Y/N): ";
        cin >> addMore;
    } while (addMore == 'y' || addMore == 'Y');

    return 0;
}
