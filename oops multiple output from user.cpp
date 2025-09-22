 #include<iostream>
using namespace std; 
class cars
{
	public:
	 char car_type[50];
	 char car_model[50];
	 int car_milage;
	 
};
int main()
{
	cars car1 ,car2;
	{
		cout<<"enter type of the car=";
		gets(car1.car_type);
		cout<<"enter modal of the car=";
	    gets(car1.car_model);
	    cout<<"enter milage of car";
	    cin>>car1.car_milage;
	    cout<<"enter type of the car=";
		gets(car2.car_type);
		cout<<"enter modal of the car=";
	    gets(car2.car_model);
	    cout<<"enter milage of car";
	    cin>>car2.car_milage;
	
    
    	puts(car1.car_type);
    	puts(car1.car_model);
    	cout<<car1.car_milage;
    	puts(car2.car_type);
    	puts(car2.car_model);
    	cout<<car2.car_milage;
	
	}

	return 0;
}
