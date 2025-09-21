#include <iostream>
using namespace std;

int main()
{
    int choice;
    while(1)
    {
        cout << "Press 1 to find ASCII value from character\n";
        cout << "Press 2 to find character from ASCII value\n";
        cout << "Press 3 to exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                char c;
                cout << "Enter a character: ";
                cin >> c;
                cout << "ASCII Value of " << c << " is " << int(c) << "\n\n";
                continue;
            }

            case 2:
            {
                int ascii;
                cout << "Enter ASCII value: ";
                cin >> ascii;
                cout << "Character is: " << char(ascii) << "\n\n";
                continue;
            }

            case 3:
            {
                exit(0);
            }

            default:
                cout << "Invalid choice. Try again.\n\n";
        }
    }
    return 0;
}
