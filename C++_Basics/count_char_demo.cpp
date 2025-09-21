#include <iostream>
using namespace std;

int main() {
    int count = 0;
    string a = "This is Nishchay chaudhary";
    string b = "N"; // character to search

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[0]) {
            count++;
            cout << "Found '" << b[0] << "' at index: " << i << endl;
        }
    }

    cout << "Total occurrences of '" << b[0] << "' = " << count << endl;
    return 0;
}
