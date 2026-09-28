#include<iostream>
using namespace std;
int main()
{
	int number;
	
	cout<<"Please Enter a number and the program will detect if that number is dividable to 3 and 5: "<<endl;
	cin>>number;
	
	if(number/3 && number/5)
	{
		cout<<"The number is dividable to 3 and 5."<<endl
			<<number<<" / 3 = "<<number/3<<endl
			<<number<<" / 5 = "<<number/5;
	}
	
	else
	{
		cout<<"The number is NOT dividable to 3 and 5."<<endl;
	}
	return 0;
}
