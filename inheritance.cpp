#include<iostream>
using namespace std;
class vehicle
{
	
	public:
		int amount(int s)
		{
			cin>>s;
			cout<<s;
		}
		
		int fuel(int a)
		{
			/*cin>>fuel;*/
			cin>>a;
			cout<<a;
		}
		int average(int r)
		{
			cin>>r;
			cout<<r; 
		}
	
		
};

class car: public vehicle
{
	public:
	int tyre_size(int w)
	{
		cin>>w;
		cout<<w;
	}
};
class truck:public car
{
	
};
class bike:public car
{
	
};


int main()
{
	car car1;
	cout<<"car price:";
	car1.amount(120);
	cout<<"\n";
	cout<<"car average:";
	car1.average(30);
	cout<<"\n";
	cout<<"car fuel capacity:";
	car1.fuel(30) ;
	cout<<"\n";
	cout<<"car tyre size:";
	car1.tyre_size(30);
	
	
	
	
	truck truck1;
	cout<<"truck price:";
	truck1.amount(120);
	cout<<"\n";
	cout<<"truck average:";
	truck1.average(30);
	cout<<"\n";
	cout<<"truck fuel capacity:";
	truck1.fuel(30) ;
	cout<<"\n";
	cout<<"truck tyre size:";
	truck1.tyre_size(30) ;
	
	
	bike bike1;
	cout<<"bike price:";
	bike1.amount(120);
	cout<<"\n";
	cout<<"bike average:";
	bike1.average(30);
	cout<<"\n";
	cout<<"bike fuel capacity:";
	bike1.fuel(30) ;
	cout<<"\n";
	
	
			
	return 0;
}

    

 

