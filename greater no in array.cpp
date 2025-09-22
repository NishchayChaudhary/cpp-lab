#include<iostream>
using namespace std;
int main()
{	
	int a[4]={24,28,29,80},i;
	for(i=0;i<4;i++)
	{
		if( a[i] > a[i+1] )
		{
			cout<<a[i];
		}
	}
	return 0;
}
