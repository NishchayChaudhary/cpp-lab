#include<iostream>
using namespace std; 

int main()
{
    int number;
    cout << "Enter your number: ";
    cin >> number;

    if(number > 0)
        cout << "Number is positive\n";
    else
        cout << "Number is negative\n";

    return 0;
}
