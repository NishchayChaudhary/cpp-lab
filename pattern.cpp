#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	//cout<<"enter the value of n- ";
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
	
			if(i==3||j==3)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
		cout<<"\n";
	}
	
	return 0;
}

