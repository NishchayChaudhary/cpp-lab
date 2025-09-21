#include <iostream>
using namespace std;

int main()
{
    int i, no, flag = 1;
    cout << "Enter your number: ";
    cin >> no;

    if (no > 1)
    {
        for(i = 2; i < no; i++)
        {
            if(no % i == 0)
            {
                flag = 0;
                break; // optional: stop loop after finding a divisor
            }
        }
    }
    else
    {
        flag = 0;
    }

    if(flag == 1)
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not Prime" << endl;
    }

    return 0;
}
