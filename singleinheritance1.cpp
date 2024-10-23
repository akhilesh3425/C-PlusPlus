#include<iostream>
using namespace std;

// Base class
class Numbers {
protected:
    int num1, num2;

public:
    // Constructor to initialize numbers
    Numbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
};

// Derived class
class Product : public Numbers {
public:
    // Constructor to initialize base class members
    Product(int a, int b) : Numbers(a, b) {}

    // Function to calculate and display the product
    void displayProduct() {
        cout << "The product of " << num1 << " and " << num2 << " is: " << (num1 * num2) << endl;
    }
};

int main() {
    // Creating an object of derived class
    Product obj(4, 5);
    
    // Displaying the product of numbers
    obj.displayProduct();

    return 0;
}
