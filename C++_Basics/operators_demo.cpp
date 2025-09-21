#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 8;

    cout << "Hello! Tanjiro bhi demon king hai 😎" << endl << endl;

    // Arithmetic Operators
    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a++ = " << a++ << endl;
    cout << "a-- = " << a-- << endl;
    cout << "++a = " << ++a << endl;
    cout << "--a = " << --a << endl;

    cout << endl;

    // Comparison Operators
    cout << "=== Comparison Operators ===" << endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    cout << endl;

    // Logical Operators
    cout << "=== Logical Operators ===" << endl;
    cout << "(a == b) && (a < b) : " << ((a == b) && (a < b)) << endl;
    cout << "(a == b) || (a < b) : " << ((a == b) || (a < b)) << endl;
    cout << "!(a == b) : " << (!(a == b)) << endl;

    return 0;
}
