#include<iostream>
using namespace std;

int sum(int a,int b)
{
	if(a==b)
	{
		return (a+b)*3;
	}
	else
	{
		return a+b;	
	}  
}
int main()
{
	int a,b;
	cout<<"enter your number a- ";
	cin>>a;
	cout<<"enter your number-b ";
	cin>>b;
	cout<<sum(a,b);
}
	
