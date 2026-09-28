#include<iostream>
using namespace std;
int main()
{
	int day;
	
	cout<<"Please choose one of the following:"<<endl
		<<"1- Satuday."<<endl
		<<"2- Sunday."<<endl
		<<"3- Monday."<<endl
		<<"4- Tuesday."<<endl
		<<"5- Wednesday."<<endl
		<<"6- Thursday."<<endl
		<<"7- Firday."<<endl;
		cin>>day;
		
		if(day=1,2,3,4,5)
		{
			cout<<"Day On."<<endl;
		}
	
	else if(day=6,7)
	{
		cout<<"Day Off."<<endl;
	}
	
	return 0;
}
