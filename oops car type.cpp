 #include<iostream>
using namespace std; 
class cars
{
	public:
	 string car_type;
	 string car_model;
	 int car_milage;
	 
};
int main()
{
	cars car1,car2;
	car1.car_type="JDM";
	car1.car_model="rx8";
	car1.car_milage=4;
	car2.car_type="JDM";
	car2.car_model="supra";
	car2.car_milage=5;
	cout<<"NAME OF CAR IS="<<car1.car_model<<"\n";
	cout<<"TYPE OF CAR IS="<<car1.car_type<<"\n";
	cout<<"MILAGE="<<car1.car_milage<<"\n";
	cout<<"NAME OF CAR IS="<<car2.car_model<<"\n";
	cout<<"TYPE OF CAR IS="<<car2.car_type<<"\n";
	cout<<"MILAGE="<<car2.car_milage;
	
	return 0;
}
