#include <iostream>
using namespace std;

int main() {
    int n;
    string a = "NISHCHAY CHAUDHARY";
    cout << "Enter the value of n: ";
    cin >> n;

    if (n > a.length()) {
        n = a.length();
    }

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}
