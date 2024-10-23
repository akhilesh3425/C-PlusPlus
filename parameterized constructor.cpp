#include <iostream>
using namespace std;

class NumberSwapper {
private:
    int first; 
    int second; 

public:
    NumberSwapper(int num1, int num2) : first(num1), second(num2) {}
    
    void swap() {
        first = first + second; 
        second = first - second; 
        first = first - second;  
    }

    void display() const {
        cout << "first: " << first << ", second: " << second << endl;
    }
};

int main() {
    int input1, input2;
    cout << "Enter two numbers: ";
    cin >> input1 >> input2;
    NumberSwapper swapObj(input1, input2);
    
    cout << "Before swapping: ";
    swapObj.display(); 
    
    swapObj.swap();
    
    cout << "After swapping: ";
    swapObj.display();
    
    return 0;
}
