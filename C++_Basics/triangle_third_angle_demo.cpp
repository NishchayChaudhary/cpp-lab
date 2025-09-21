#include<iostream>
using namespace std;

int main()
{
    int a, b, d = 180;
    cout << "Enter angle a: ";
    cin >> a;
    cout << "Enter angle b: ";
    cin >> b;

    cout << "The third angle c = " << d - (a + b) << endl;

    return 0;
}
