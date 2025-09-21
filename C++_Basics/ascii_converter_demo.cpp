nano C++_Basics/ascii_converter_demo.cpp
>
using namespace st{
  int choice;
  while(1)
    
        cout << "Press 1 to find ASCII value from character\n";      cout << "Press 2 to find character from ASCII value\n";
      cout << "Press 3 to exit\n";
    
#include <iostream>
using namespace std;
int main()
{
	int o,c,J,choice;
	while(1)
	{

	cout<<"press 1 to find ASCII value from character\n";
 	cout<<"press 2 to find character from ASCII value\n";
 	cout<<"press 3 to exit\n";
 	cout<<"Enter your choice-";
 	cin>>choice;
 	switch(choice)
	{
		case 1:
 		{
 				char c;
 				cout << "Enter a character: ";
				cin >> c;
 				cout << "ASCII Value of " << c << " is " <<int(c);
 			   	cout<<"\n";
 			   	continue;

		}
		
 		case 2:	
		{
 			int J;
 			cout<<"\n";
			cout<<"Enter ASCII: \n";
			cin>>J;
			cout<<"character is: "<<char(J);
			cout<<"\n";
 			  	continue;
	    }	
	    case 3:  
		{
		
		
			exit(0);
	    }
			
	} 
	
	}
 	 return 0;
 }

