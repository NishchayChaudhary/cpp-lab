#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> a[i];
    }

    cout << "Common/duplicate numbers are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                cout << a[i] << " ";
            }
        }
    }

    delete[] a; // free memory
    return 0;
}
