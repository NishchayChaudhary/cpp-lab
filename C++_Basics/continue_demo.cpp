#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0)
        {
            continue;
        }
        cout << i << " special learns\n";
    }

    return 0;
}
