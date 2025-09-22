#include<iostream>
using namespace std;
class person
{
	public:
	char person_name[25];
	char person_car_name[25];
	char salary[10];
};
int main()
{
	int i=1,n;
	person p[i];
	cout<<"enter the no of person detail you want to add: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
 
  {

	
 	cout << "Enter person name: ";
	cin>>p[i].person_name;
  	cout << "Enter person car modal: ";
	cin>>p[i].person_car_name;
  	cout << "Enter salary: ";
  	cin>>p[i].salary;
  	
	puts(p[i].person_name);
	puts(p[i].person_car_name);
	puts(p[i].salary);
  		
  }
return 1;
} 

