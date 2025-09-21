#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Minimum value is: " << fmin(a, b) << endl;

    return 0;
}
