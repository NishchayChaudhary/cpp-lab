#include<iostream>
using namespace std;
int main()
{
	int i,a,b,flag,j;
	cout<<"enter your number";
	cin>>a;
	cin>>b;
for(i=a;i<b;i++)
{
	if( i==0 || i==1)
	{
		flag=0;
	}
	else
	{
		flag=1;
	}
    for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{					
				flag=0;
				break;
			}
		}
	if (flag==1)
	{
		cout<<" "<<i;
	}
	
}
	
	return 0;
}
