#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "arpit" << endl;
            break;
        case 2:
            cout << "nishchay" << endl;
            break;
        case 3:
            cout << "gourav" << endl;
            break;
        case 4:
            cout << "bandan" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
    }

    return 0;
}
