#include<iostream>
using namespace std;

class car
{
	private:
		int health;
		
	public:
	//Create getter
	int gethealth()
		{
			return health;
		}
	//create setter
	int sethealth(int h)
		{
			health=h;
		}
};

int main()
{
	car car1;
	car1.sethealth(70);
	cout<<car1.gethealth();
	
	return 0;
}
