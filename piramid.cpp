#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=0;k<=j;k++)
		{
			cout<<"*";
		}
		cout<<"\n";
    }
    return 0;
    
}
