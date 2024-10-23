#include <iostream>
using namespace std;

class Sum {
public:
    // Constructor for integers
    Sum(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    // Constructor for floats
    Sum(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }

    // Constructor for chars
    Sum(char a, char b) {
        cout << "Sum of chars (ASCII values): " << (static_cast<int>(a) + static_cast<int>(b)) << endl;
    }
};

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 5.5f, float2 = 10.5f;
    char char1 = 'A', char2 = 'B';

    Sum sumInt(int1, int2);
    Sum sumFloat(float1, float2);
    Sum sumChar(char1, char2);

    return 0;
}