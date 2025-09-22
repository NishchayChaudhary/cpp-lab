#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=1;k<=j;k++)
			{
				cout<<"     *";
			}
		}
		cout<<"\n";
    }
    return 0;
}
