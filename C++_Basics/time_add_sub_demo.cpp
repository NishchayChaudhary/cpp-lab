#include <iostream>
using namespace std;

int main()
{
    int choice;
    while(1)
    {
        cout << "\nMenu:\n";
        cout << "Press 1 to add time\n";
        cout << "Press 2 to subtract time\n";
        cout << "Press 3 to exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int hour1, minute1, second1;
                int hour2, minute2, second2;
                cout << "Enter first time:\n";
                cout << "Hours: "; cin >> hour1;
                cout << "Minutes: "; cin >> minute1;
                cout << "Seconds: "; cin >> second1;

                cout << "Enter second time to add:\n";
                cout << "Hours: "; cin >> hour2;
                cout << "Minutes: "; cin >> minute2;
                cout << "Seconds: "; cin >> second2;

                int total_seconds = second1 + second2;
                int total_minutes = minute1 + minute2 + total_seconds / 60;
                int total_hours = hour1 + hour2 + total_minutes / 60;

                total_seconds %= 60;
                total_minutes %= 60;

                cout << "Total Time is: " << total_hours << " hours "
                     << total_minutes << " minutes "
                     << total_seconds << " seconds\n";
                break;
            }

            case 2:
            {
                int hour1, minute1, second1;
                int hour2, minute2, second2;
                cout << "Enter first time:\n";
                cout << "Hours: "; cin >> hour1;
                cout << "Minutes: "; cin >> minute1;
                cout << "Seconds: "; cin >> second1;

                cout << "Enter second time to subtract:\n";
                cout << "Hours: "; cin >> hour2;
                cout << "Minutes: "; cin >> minute2;
                cout << "Seconds: "; cin >> second2;

                int total_seconds = (hour1*3600 + minute1*60 + second1) - (hour2*3600 + minute2*60 + second2);
                if(total_seconds < 0) total_seconds = 0;

                int total_hours = total_seconds / 3600;
                total_seconds %= 3600;
                int total_minutes = total_seconds / 60;
                total_seconds %= 60;

                cout << "Total Time is: " << total_hours << " hours "
                     << total_minutes << " minutes "
                     << total_seconds << " seconds\n";
                break;
            }

            case 3:
                exit(0);

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
