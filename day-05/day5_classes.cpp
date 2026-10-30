#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product()
    {
        productCode = "";
        productName = "";
        price = 0;
        quantityInStock = 0;
    }

    // Setter methods
    void setProductCode(string code)
    {
        if (code != "")
        {
            productCode = code;
        }
    }

    void setProductName(string name)
    {
        if (name != "")
        {
            productName = name;
        }
    }

    void setPrice(double p)
    {
        if (p >= 0)
        {
            price = p;
        }
    }

    void setQuantityInStock(int quantity)
    {
        if (quantity >= 0)
        {
            quantityInStock = quantity;
        }
    }

    // Getter methods
    string getProductCode()
    {
        return productCode;
    }

    string getProductName()
    {
        return productName;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantityInStock()
    {
        return quantityInStock;
    }
};

int main()
{
    // Create first product
    Product product1;

    product1.setProductCode("P201");
    product1.setProductName("Wireless Headphones");
    product1.setPrice(799.99);
    product1.setQuantityInStock(25);

    // Create second product
    Product product2;

    product2.setProductCode("P202");
    product2.setProductName("Computer Monitor");
    product2.setPrice(1599.50);
    product2.setQuantityInStock(8);

    // Display product information
    cout << fixed << setprecision(2);

    // Display first product
    cout << "Product Code: "
         << product1.getProductCode() << endl;

    cout << "Product Name: "
         << product1.getProductName() << endl;

    cout << "Price: R"
         << product1.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product1.getQuantityInStock() << endl;

    cout << "\n------------------------\n";

    // Display second product
    cout << "Product Code: "
         << product2.getProductCode() << endl;

    cout << "Product Name: "
         << product2.getProductName() << endl;

    cout << "Price: R"
         << product2.getPrice() << endl;

    cout << "Quantity in Stock: "
         << product2.getQuantityInStock() << endl;

    return 0;
}
