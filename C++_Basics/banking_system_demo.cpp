#include<iostream>
using namespace std;

int main()
{
    int balance = 1000, withdraw_amount, diposit_amount, zdeposit, choice, pass = 1111, password, years, i;
    
    while(1)
    {
        cout << "\n";    
        cout << "Press 1 to check your balance\n";
        cout << "Press 2 to withdraw money\n";
        cout << "Press 3 to deposit money\n";
        cout << "Press 4 for fixed deposit (FD)\n";
        cout << "Press 5 to change your password\n";
        cout << "Press 6 to exit\n";
        cout << "Enter number: ";
        cin >> choice;

        switch(choice)
        {   
            case 1:
            {   
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Your current balance is: " << balance << "\n"; 
                }
                else
                {
                    cout << "Password is wrong\n";
                }   
                break;
            }

            case 2:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter amount to withdraw: ";
                    cin >> withdraw_amount;
                    if(balance >= withdraw_amount)
                    {
                        balance -= withdraw_amount;
                        cout << "Your current balance is: " << balance << "\n";
                    }
                    else
                    {
                        cout << "Insufficient balance\n";
                    }
                }   
                else
                {
                    cout << "Password is wrong\n";
                }
                break;
            }

            case 3:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter amount to deposit: ";
                    cin >> diposit_amount;
                    balance += diposit_amount;
                    cout << "Your total balance is: " << balance << "\n";
                }
                else
                {
                    cout << "Password is wrong\n";
                }
                break;
            }

            case 4:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter amount for fixed deposit: ";
                    cin >> zdeposit;
                    cout << "Enter number of years: ";
                    cin >> years;

                    for(i = 1; i <= years; i++)
                        zdeposit = zdeposit + 0.1 * zdeposit;

                    cout << "Amount after FD: " << zdeposit << "\n";
                }
                break;
            }

            case 5:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter your new password: ";
                    cin >> password;
                    pass = password;
                }
                else
                {
                    cout << "Wrong password\n";
                }
                break;          
            }   

            case 6:
                exit(0);

            default:
#include<iostream>
using namespace std;

int main()
{
    int balance = 1000, withdraw_amount, diposit_amount, zdeposit, choice, pass = 1111, password, years, i;
    
    while(1)
    {
        cout << "\n";    
        cout << "Press 1 to check your balance\n";
        cout << "Press 2 to withdraw money\n";
        cout << "Press 3 to deposit money\n";
        cout << "Press 4 for fixed deposit (FD)\n";
        cout << "Press 5 to change your password\n";
        cout << "Press 6 to exit\n";
        cout << "Enter number: ";
        cin >> choice;

        switch(choice)
        {   
            case 1:
            {   
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Your current balance is: " << balance << "\n"; 
                }
                else
                {
                    cout << "Password is wrong\n";
                }   
                break;
            }

            case 2:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter amount to withdraw: ";
                    cin >> withdraw_amount;
                    if(balance >= withdraw_amount)
                    {
                        balance -= withdraw_amount;
                        cout << "Your current balance is: " << balance << "\n";
                    }
                    else
                    {
                        cout << "Insufficient balance\n";
                    }
                }   
                else
                {
                    cout << "Password is wrong\n";
                }
                break;
            }

            case 3:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter amount to deposit: ";
                    cin >> diposit_amount;
                    balance += diposit_amount;
                    cout << "Your total balance is: " << balance << "\n";
                }
                else
                {
                    cout << "Password is wrong\n";
                }
                break;
            }

            case 4:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter amount for fixed deposit: ";
                    cin >> zdeposit;
                    cout << "Enter number of years: ";
                    cin >> years;

                    for(i = 1; i <= years; i++)
                        zdeposit = zdeposit + 0.1 * zdeposit;

                    cout << "Amount after FD: " << zdeposit << "\n";
                }
                break;
            }

            case 5:
            {
                cout << "Enter your password: ";
                cin >> password;
                if(pass == password)
                {
                    cout << "Enter your new password: ";
                    cin >> password;
                    pass = password;
                }
                else
                {
                    cout << "Wrong password\n";
                }
                break;          
            }   

            case 6:
                exit(0);

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
