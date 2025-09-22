#include<iostream>
using namespace std;

class Ny {
	private:
    	float radius;

	public:
		area(double r)
		{
			radius=r;
		double	ar=3.14*radius*radius;
		
		cout<<"The radius is "<<radius;
		cout<<"The area is "<<ar;
		}
		    	
};

int main() 
{
	
	Ny ny1;
	ny1.area(1.2);	 	   
    
return 0;
}
