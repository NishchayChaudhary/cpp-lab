#include<iostream>
using namespace std;
main()
{
	int A,B;
	cout<<"enter player age";
	cin>>A;
	cin>>B;
	if(A>=18)
	{
		if(A<=22)
		{
			if(B>=23)
			{
				if(B<=27)
				{
					cout<<"welcome";
				}
				else
				{
					cout<<"sorry";
				}
			}
			else
			{
				cout<<"sorry";
			}
			
		}
		else
	    {
		    cout<<"sorry";
	    }
	}
	else
	
	{
		cout<<"sorry";
	}
}











