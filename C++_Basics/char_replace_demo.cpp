#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "my name is nishchay";
    int len = a.length();

    for (int i = 0; i < len; i++) {
        if (a[i] == 'a') {
            a[i] = 'b';
        }
        if (a[i] == 'm') {
            a[i] = 'n';
        }
        if (a[i] == 'u') {
            a[i] = 'z';
        }
    }

    cout << a << endl;
    return 0;
}
