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

    
    void calculateSum() {
        cout << "Enter a number: ";
        cin >> n;

        int sum = (n * (n + 1)) / 2; 
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    
    SumOfNaturalNumbers obj;
    
    
    obj.calculateSum();

    return 0;
}
