#include <iostream>
using namespace std;

int main() {
    string a = "This is Nishchay Chaudhary";
    string c = "i"; // character to search
    int count = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == c[0]) {
            count++;
            cout << "Found '" << c[0] << "' at index: " << i << endl;
        }
    }

    cout << "Total occurrences of '" << c[0] << "' = " << count << endl;
    return 0;
}
