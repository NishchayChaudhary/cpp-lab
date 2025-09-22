#include<iostream>
using namespace std;

class car
{
	private:
		int amount;
		
	public:
	//Create getter
	int getamount()
		{
			return amount;
		}
	//create 
	int putamount(int a)
		{
			amount=a;
		}
};

int main()
{
	int a;
	car car1;
	car1.getamount(80);
	car1.putamount(a);
	

	
	return 0;
}
