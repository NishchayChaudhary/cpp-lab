#include<iostream>
using namespace std;
class animal
{
	public:
	void speak()
	{
		cout<<"i am speaking";
	}
};
class dog:public animal
{
	public:
	void speak()
	{
		cout<<"i am barking";
	}
};
int main()
{
	dog ad1;
	ad1.speak();
	return 0;
}
