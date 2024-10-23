#include<iostream>
using namespace std;

class SumOfNaturalNumbers {
private:
    int n;

public:
    // Default constructor to initialize n
    SumOfNaturalNumbers() {
        n = 0; // Default value for n
    }

    // Function to input n and calculate the sum of first n natural numbers
    void calculateSum() {
        cout << "Enter a number: ";
        cin >> n;

        int sum = (n * (n + 1)) / 2; // Formula to calculate the sum of first n natural numbers
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    // Creating an object of SumOfNaturalNumbers
    SumOfNaturalNumbers obj;
    
    // Calling the function to calculate the sum
    obj.calculateSum();

    return 0;
}
