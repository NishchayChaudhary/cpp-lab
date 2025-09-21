#include <iostream>
using namespace std;

int main() {
    int a = 7;
    int *p = &a;
    int **ptr = &p;

    cout << *ptr << "\n";   // address of a (same as p)
    cout << **ptr;          // value of a

    return 0;
}
