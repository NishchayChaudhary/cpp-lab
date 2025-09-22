#include<iostream>
using namespace std;
int main()
{
	int *b,**c;
	int a=6;
	b=&a;
	c=&b;
		
	cout<<**c;
	return 0;
}
