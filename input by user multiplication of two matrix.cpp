#include<iostream>
using namespace std;
int main()
{
	int r,c,i,k,z,j,a[i][j],b[i][j],m[i][j];
	
	//First Matrics Input
	cout<<"enter the number of the rows=";
	cin>>r;
	cout<<"\n";
	cout<<"enter the number of columms=";
	cin>>c;
	cout<<"\n";
	cout<<"enter the first matrix element=\n"; 
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j]; 
		}
	}
 
	// Second Matrics Input
	cout<<"enter the second matrix element=\n";
	for(int i=0;i<r;i++)
	{	
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];		
	    }
	}
	
	//multiplication of 2 Matrics
	cout<<"multiply of the matrix=\n";  
	for(i=0;i<r;i++)  
	{  
		for(j=0;j<c;j++)  
		{  
			m[i][j]=0;  
			for(k=0;k<r;k++)  
			{  
				//m[i][j]+=a[i][k]*b[k][j]; 
				m[i][j]=m[i][j] + a[i][k]* b[k][j];
			}  
		}  	
	}
        

	
	//Print our final matrics
	
	cout<<"Your Final Matrics is \n\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<m[i][j];
			cout<<"\t"; 
		}
		cout<<"\n";
	}
	
			
	return 0;
}
