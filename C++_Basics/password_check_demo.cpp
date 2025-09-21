#include<iostream>
using namespace std;

int main()
{
    int password;
    cout << "Enter your password: ";
    cin >> password;

    if(password == 9521)
    {
        cout << "Password is correct\n";
    }
    else
    {
        cout << "Password is wrong\n";
    }

    return 0;
}
