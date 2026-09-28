#include <iostream>
using namespace std;
int main()
{
	int age;
	
	cout<<"Please Enter your Age: "<<endl;
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You have access to the program.";
	}
	else
	{
		cout<<"I'm sorry, but you still a minor...";
	}
	
	
	return 0;
}
