#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements you want to arrange in ascending order: ";
    cin >> n;

    int a[n]; // now n is known
    int temp;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> a[i];
    }

    // Sorting in ascending order
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
