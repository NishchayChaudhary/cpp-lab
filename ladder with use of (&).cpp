#include<iostream>
using namespace std;
int 
main()
{
	int A,B;
	cout<<"enter player age";
	cin>>A;
	cin>>B;
	if((A>=18 && A<=22) && (B>=23 && B<=27))
	{
		cout<<"welcome";
	}
	else
	{
		cout<<"sorry";
	}
	return 0;
}
