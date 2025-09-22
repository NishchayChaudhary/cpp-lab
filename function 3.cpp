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
	cout<<"enter value of a- ";
	cin>>a;
	cout<<"enter the value of b- ";
	cin>>b;
	cout<<sum(a,b);
}

