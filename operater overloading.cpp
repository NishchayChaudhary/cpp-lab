#include<iostream>
using namespace std;
class area
{

	private:
	int lenght,breadth;
	
    public:
	 area(int l=0,int b=0)
	{
		lenght=l;
		breadth=b;
	}
	area operator+(area const& obj)
	{
		area p1;
		p1.lenght=lenght+obj.lenght;
		p1.breadth=breadth+obj.breadth;
		return 0;
	}
	void print()
	{
		cout<<breadth;
		
	}
};
	int main()
	{
		int a,b,c=0;
		cout<<"a ";
		cin>>a;
		cout<<"b ";
		cin>>b;
		c=a+b;
		area c1(a),c2(b);
		area c3(c);
		cout<<"c "<<c;
		return 0;
	}
	

