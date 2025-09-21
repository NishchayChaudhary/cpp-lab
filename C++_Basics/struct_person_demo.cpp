#include <iostream>
#include <string>
using namespace std;

struct person {
    string name;
    int id;
    int age;
} p[5];

int main() {
    for (int i = 0; i < 5; i++) {
        cin.ignore(); // clear newline before getline
        cout << "Enter name of person: ";
        getline(cin, p[i].name);

        cout << "Enter id of person: ";
        cin >> p[i].id;

        cout << "Enter age of person: ";
        cin >> p[i].age;
    }

    cout << "\n--- Person Details ---\n";
    for (int i = 0; i < 5; i++) {
        cout << "Name: " << p[i].name
             << ", ID: " << p[i].id
             << ", Age: " << p[i].age << "\n";
    }

    return 0;
}
