#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{	
			cin>>a[i][j]; 
		}
	}
	
	cout<<"\n\n\n";
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
			
		}
		cout<<"\n\n";
	}
	return 0;
}
