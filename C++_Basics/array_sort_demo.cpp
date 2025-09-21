#include<iostream>
using namespace std;

int main()
{
	int a[10]={4,17,7,6,5,9,8,0,3,2},c;
	
	//logic
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
			else
			{
				continue;
			}
		}
	}
	
	//print array
	
	for(int i=0;i<10;i++)
	{
		cout<<a[i];
	}
	
	
	return 0;
}
