#include<iostream>
using namespace std;
int main()
{
	int arr[5]={42,31,41,28,76};
	int *ptr;
	ptr=&arr[0];
	ptr++;
	cout<<*ptr;
	return 0;
}


