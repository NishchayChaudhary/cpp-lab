#include <iostream>
using namespace std;

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = i; j >= 1; j--) {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}
