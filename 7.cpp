#include<iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Please Enter your Age: "<<endl;
	cin>>age;
	
	if(age>=18 && age<=60)
	{
		cout<<"You are allowed to work!."<<endl;
	}
	
	else
	{
		cout<<"I'm sorry, but you are not allowed to work..."<<endl;
	}
	return 0;
}
