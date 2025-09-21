#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Constants in C++
    const int a = 3;
    cout << "the value of a is: " << a << endl;

    // Manipulators in C++
    int x = 3, y = 78, z = 1233;
    cout << "the value of a is without setw: " << x << endl;
    cout << "the value of b is without setw: " << y << endl;
    cout << "the value of c is without setw: " << z << endl;

    cout << "the value of a is with setw: " << setw(4) << x << endl;
    cout << "the value of b is with setw: " << setw(4) << y << endl;
    cout << "the value of c is with setw: " << setw(4) << z << endl;

    // Operator Precedence
    int p = 3, q = 4;
    int result = ((((p * 5) + q) - 45) + 87);
    cout << result;

    return 0;
}
