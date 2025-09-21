#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many numbers you want to input: ";
    cin >> n;

    vector<int> a(n);

    // Input array
    for(int i = 0; i < n; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> a[i];
    }

    cout << "Duplicate numbers are: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                cout << a[i] << " ";
            }
        }
    }

    cout << endl;
    return 0;
}

