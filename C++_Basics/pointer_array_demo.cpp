#include <iostream>
using namespace std;

int main() {
    int arr[5] = {42, 31, 41, 28, 76};
    int *ptr = &arr[0];  // pointer to first element
    ptr++;                // move to next element

    cout << *ptr;         // prints 31

    return 0;
}
