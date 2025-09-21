#include <iostream>
#include <limits>
using namespace std;

struct Lib {
    string name;
    string author;
    int price;
};

int main() {
    int n;

    cout << "Enter how many books you want to add in the Library: ";
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    Lib book[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the name of the Book: ";
        getline(cin, book[i].name);

        cout << "Enter the Price of the book: ";
        cin >> book[i].price;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Enter the name of the Author of the Book: ";
        getline(cin, book[i].author);

        cout << "\n";

        cout << "The Details of the Book You entered are:" << endl;
        cout << "The Book name is " << book[i].name << endl;
        cout << "The Author of the Book is " << book[i].author << endl;
        cout << "The Price of the Book is " << book[i].price << endl;
        cout << "\n";
    }

    return 0;
}

