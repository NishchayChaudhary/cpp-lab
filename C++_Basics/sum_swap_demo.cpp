#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

// Call by value (this will NOT swap a and b)
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointer
void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variable
void swapReferencevar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 4, b = 5;

    cout << "The sum of a and b is " << sum(a, b) << endl;
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    // Swap using reference variable
    swapReferencevar(a, b);

    cout << "After swap using reference variable: a = " << a << ", b = " << b << endl;

    return 0;
}
