#include<iostream>
using namespace std;
int main()
{
	int number;
	
	cout<<"Please Enter a number and the program will check if its Even or Odd: "<<endl;
	cin>>number;
	
	if(number %2==0)
	{
		cout<<"EVEN"<<endl;
	}
	
	else
	{
		cout<<"ODD"<<endl;
	}
	return 0;
}
