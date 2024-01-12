#include <iostream>
#include <string>
using namespace std;
class Product {
    private:
        int productID;
        string productName;
        float price;
        int quantityInStock;

    public:
        Product(int id,string name, float price, int quantity) {
            productID = id;
            productName = name;
            this->price = price;
            quantityInStock = quantity;
        }

        int getProductID() { return productID; }
        string getProductName() { return productName; }
        float getPrice() { return price; }
        int getQuantityInStock() { return quantityInStock; }

        void setProductID(int id) { productID = id; }
        void setProductName(string name) { productName = name; }
        void setPrice(float price) { this->price = price; }
        void setQuantityInStock(int quantity) { quantityInStock = quantity; }
};

int main() {
    Product p1(1, "Product1", 100.0, 10);
    Product p2(2,"product 2",1000.,10);
    cout << "Product ID: " << p2.getProductID() <<endl;
    cout << "Product Name: " << p2.getProductName() << endl;
    cout << "Product Price: " << p2.getPrice() << endl;
    cout << "Product Quantity in Stock: " << p2.getQuantityInStock() <<endl;

    return 0;
}
