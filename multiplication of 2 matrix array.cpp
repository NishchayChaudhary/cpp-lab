#include<iostream>
using namespace std;
int main()
{
	int a[2][2],b[2][2],m[2][2],i,k,z,j;
	
	//First Matrics Input
	cout<<"enter the first matrix element=\n"; 
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j]; 
		}
	}
 
	// Second Matrics Input
	cout<<"enter the second matrix element=\n";
	for(int i=0;i<2;i++)
	{	
		for(int j=0;j<2;j++)
		{
			cin>>b[i][j];		
	    }
	}
	
	//multiplication of 2 Matrics
	cout<<"multiply of the matrix=\n";  
	for(i=0;i<2;i++)  
	{  
		for(j=0;j<2;j++)  
		{  
			m[i][j]=0;  
			for(k=0;k<2;k++)  
			{  
				//m[i][j]+=a[i][k]*b[k][j]; 
				m[i][j]=m[i][j] + a[i][k]* b[k][j];
			}  
		}  	
	}
        

	
	//Print our final matrics
	
	cout<<"Your Final Matrics is \n\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<m[i][j];
			cout<<"\t"; 
		}
		cout<<"\n";
	}
	
			
	return 0;
}
