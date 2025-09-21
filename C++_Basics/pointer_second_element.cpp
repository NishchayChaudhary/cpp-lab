#include <iostream>
using namespace std;

int main() {
    int n, *arr, *ptr;

    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocate array
    arr = new int[n];

    cout << "Enter the values of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ptr = arr;     // pointer to first element
    ptr++;         // move pointer to 2nd element

    cout << "Second element is: " << *ptr << endl;

    delete[] arr;  // free memory
    return 0;
}
