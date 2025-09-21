#include<iostream>
using namespace std;
int main()
{
	int i,no,flag=1;
	cout<<"enter your number";
	cin>>no;
	if(no>1)
	{
	
		for(i=2;i<no;i++)
		{
			if(no%i==0)
			{
				flag=0;
			
			}
		
		
		}
	}
	else{
		flag=0;
	}
		
	if(flag==1)
	{
		cout<<"No. is Prime";
	}
	else
	{
		cout<<"No. is not Prime";
	}
	return 0;
}
