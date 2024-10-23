#include <iostream>
using namespace std;

class ArraySum {
private:
    int* arr;
    int size;

public:
    ArraySum(int* inputArr, int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
    }

    ArraySum(const ArraySum& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    int sumOfPositives() {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }

    ~ArraySum() {
        delete[] arr;
    }
};

int main() {
    int inputArr[] = {1, -4, 8, 7, -5, 9};
    int size = sizeof(inputArr) / sizeof(inputArr[0]);

    ArraySum original(inputArr, size);
    ArraySum copy(original);
    
    cout << "Sum of positive numbers: " << copy.sumOfPositives() << endl;
    
    return 0;
}