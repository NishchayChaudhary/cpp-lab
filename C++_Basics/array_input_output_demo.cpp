#include<iostream>
using namespace std;

int main()
{
    int a[4], i;

    // Input 4 elements
    for(i = 0; i < 4; i++)
        cin >> a[i];

    cout << "\n";

    // Print all elements
    for(i = 0; i < 4; i++)
        cout << a[i] << "\n";

    return 0;
}

