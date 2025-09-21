#include <iostream>
#include <string>
using namespace std;

struct Person {
    int id;
    string firstname;
    string lastname;
    int age;
    char gender;
};

int main() {
    Person p1;

    cout << "Enter person id: ";
    cin >> p1.id;
    cin.ignore(); // clear newline

    cout << "Enter person first name and last name: ";
    cin >> p1.firstname >> p1.lastname;

    cout << "Enter person age: ";
    cin >> p1.age;

    cout << "Enter person gender (M/F): ";
    cin >> p1.gender;

    cout << "\n--- Person Details ---\n";
    cout << "Person ID: " << p1.id << "\n";
    cout << "Person Name: " << p1.firstname << " " << p1.lastname << "\n";
    cout << "Person Age: " << p1.age << "\n";
    cout << "Person Gender: " << p1.gender << "\n";

    return 0;
}

