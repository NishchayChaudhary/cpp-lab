#include<iostream>
using namespace std;
int main()

{
	int count=1;
	string a = "Hello Arpit this is Saurabh";
	string b = " ";
	int len=a.length();
    for(int i=0;i<len;i++)
    {
    	if(a[i]==b[0])
    	{
    		count++;
		}
    	
	}
	
    
	cout<<count;
return 0;
}
