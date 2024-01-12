#include <iostream>  // Include header for input/output operations
#include <string>    // Include header for string manipulation
using namespace std;  // Bring the std namespace into scope

class Product {
private:
    int productID;          // Product ID
    string productName;     // Product name
    float price;            // Product price
    int quantityInStock;    // Quantity of the product in stock

public:
    // Constructor to initialize product details
    Product(int id, string name, float price, int quantity) {
        productID = id;
        productName = name;
        this->price = price;  // Use "this->" to avoid ambiguity with price parameter
        quantityInStock = quantity;
    }

    // Getter functions to access product information
    int getProductID() { return productID; }
    string getProductName() { return productName; }
    float getPrice() { return price; }
    int getQuantityInStock() { return quantityInStock; }

    // Setter functions to modify product information
    void setProductID(int id) { productID = id; }
    void setProductName(string name) { productName = name; }
    void setPrice(float price) { this->price = price; }
    void setQuantityInStock(int quantity) { quantityInStock = quantity; }
};

int main() {
    // Create two Product objects
    Product p1(1, "Product1", 100.0, 10);
    Product p2(2, "product 2", 1000.0, 10);  // Note: Added decimal point for price

    // Print information for p2
    cout << "Product ID: " << p2.getProductID() << endl;
    cout << "Product Name: " << p2.getProductName() << endl;
    cout << "Product Price: " << p2.getPrice() << endl;
    cout << "Product Quantity in Stock: " << p2.getQuantityInStock() << endl;

    return 0;  // Indicate successful program termination
}
