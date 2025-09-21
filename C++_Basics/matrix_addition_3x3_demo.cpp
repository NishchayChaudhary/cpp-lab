#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],k[3][3],i,j;
	
	//First Matrics Input
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j]; 
		}
	}
	
	// Second Matrics Input
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];		
	    }
	}
	
	//Addition of 2 Matrics
	for(int i=0;i<3;i++)
	{	
		for(int j=0;j<3;j++)
		{
			k[i][j]=a[i][j]+b[i][j];		
	    }
	}
	
	
	//Print our final matrics
	
	cout<<"Your Final Matrics is \n\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<k[i][j];
			cout<<"\t"; 
		}
		cout<<"\n";
	}
	
			
	return 0;
}
