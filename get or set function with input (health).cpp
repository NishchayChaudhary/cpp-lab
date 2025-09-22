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
	int c;
	car car1;
	cin>>c;
	car1.sethealth(c);
	cout<<car1.gethealth();
	
	return 0;
}
