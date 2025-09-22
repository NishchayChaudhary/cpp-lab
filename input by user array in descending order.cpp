#include<iostream>
using namespace std;

int main()
{
	int i,j,c,n,a[n];
    
	cout<<"enter your value of number you want to arrange in descending-";
	cin>>n;
	
	// 
	for(int i=0;i<n;i++)
	{
		cout<<"enter your "  <<  i  <<   " number-";
		cin>>a[i];
    }
		
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
			else
			{
				continue;
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	
	return 0;
}
