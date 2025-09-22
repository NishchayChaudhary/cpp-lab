#include<iostream>
using namespace std;
int main()
{
	int a[2][2],i,j;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j]; 
		}
	}
	
	cout<<"\n\n\n";
	for(int i=0;i<2;i++)
	{	
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<"\t";
			
		}
		cout<<"\n\n";
	}
	return 0;
}
