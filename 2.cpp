#include<iostream>
using namespace std;
int main()
{
	int number;
	
	cout<<"Please Enter a number and the program will check if that number is either Possitive or Negative:"<<endl;
	cin>>number;
	
	if(number > 0)
	{
		cout<<"POSSTIVE."<<endl;
	}
	
	else if(number <0)
	{
		cout<<"NEGATIVE."<<endl;
	}
	
	return 0;
}
