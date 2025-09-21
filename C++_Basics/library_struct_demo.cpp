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

    for (int i = 0; i < n; i++) 
	{


 		cout << "Enter book name: ";
 		getline (cin,book[i].name);

		cout << "Enter price: ";
  		cin>>(book[i].price);

  		cout << "Enter book author name(press # to complete): ";
  		getline(cin,book[i].author, '#');	//# is a delimiter 

 		cout << "\nEntered details are:\n";
  		cout << "book name: " << book[i].name << endl;
 		cout << "price of  book: " << book[i].price << endl;
  		cout << "Author name of book: " << book[i].author << endl;
    }

    return 0;
}
