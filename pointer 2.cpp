#include<iostream>
using namespace std ;
int main()
{
	int *a,**c;
	int b=7;
	a=&b;
	c=&a;
	cout<<**c;
	return 0;
}
