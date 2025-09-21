#include <iostream>
#include <limits>
#include <string>
using namespace std;

struct person {
    string name;
    int id;
    int age;
};

int main() {
    int n;

    cout << "Enter how many persons you want to add: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    person persons[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the name of person " << i+1 << ": ";
        getline(cin, persons[i].name);

        cout << "Enter the id of person " << i+1 << ": ";
        cin >> persons[i].id;

        cout << "Enter the age of person " << i+1 << ": ";
        cin >> persons[i].age;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

        cout << "\nDetails of person " << i+1 << ":\n";
        cout << "Name: " << persons[i].name << endl;
        cout << "ID: " << persons[i].id << endl;
        cout << "Age: " << persons[i].age << endl << endl;
    }

    return 0;
}
