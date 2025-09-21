#include <iostream>
using namespace std;

int main() {
    int i, n, *arr, *ptr;

    cout << "Enter the size of array: ";
    cin >> n;

    arr = new int[n];  // dynamically allocate array

    cout << "Enter the values of array:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ptr = &arr[0];  // pointer to first element
    ptr++;          // move to second element

    cout << "The second element is: " << *ptr << endl;

    delete[] arr;   // free memory
    return 0;
}
