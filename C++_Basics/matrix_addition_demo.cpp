#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],k[2][2],i,j;
	
	//First Matrics Input
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"enter your first matrix";
			cin>>a[i][j]; 
		}
	}
	
	// Second Matrics Input
	for(int i=0;i<2;i++)
	{	
		for(int j=0;j<2;j++)
		{
			cout<<"enter your secound matrix";
			cout<<"\n";
			cin>>b[i][j];		
	    }
	}
	
	//Addition of 2 Matrics
	for(int i=0;i<2;i++)
	{	
		for(int j=0;j<2;j++)
		{
			k[i][j]=a[i][j]+b[i][j];		
	    }
	}
	
	
	//Print our final matrics
	
	cout<<"Your Final Matrics is \n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<k[i][j];
			cout<<"\t"; 
		}
		cout<<"\n";
	}
	
			
	return 0;
}
