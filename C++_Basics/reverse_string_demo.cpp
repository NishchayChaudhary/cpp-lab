#include <iostream>
using namespace std;

int main() {
    string a = "This is Nishchay Chaudhary";
    int len = a.length();

    for (int i = len - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}
