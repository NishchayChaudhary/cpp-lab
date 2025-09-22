#include<iostream>
using namespace std;

int main()
{


	int i,j,c,n,a[n],add,sum=0;
    
	cout<<"enter your value of number you want add-";
	cin>>n;
	
	// 
	for(int i=0;i<n;i++)
	{
		cout<<"enter your "  <<  i  <<   " number-";
		cin>>a[i];
    }
		
	for(int i=0;i<n;i++)
	{	
		sum=sum+a[i];
				
	}
	cout<<sum;
	return 0;
}
