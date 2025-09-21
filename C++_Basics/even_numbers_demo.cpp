#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    vector<int> a(n);

    // Input numbers
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> a[i];
    }

    cout << "Even numbers are: ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
