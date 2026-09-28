#include<iostream>
using namespace std;
int main()
{
	const int password=1234;
	int input;
	
	cout<<"Please Enter the password: "<<endl;
	cin>>input ;
	
		if(input ==password)
	{
		cout<<"Correct password."<<endl;
		exit(1);
	}
	
	else
	{
		cout<<endl<<"Wrong password. Please try again:"<<endl;
	}	
	
	while(input !=-1)
	{
		cin>>input ;
	
		if(input ==password)
	{
		cout<<"Correct password."<<endl;
		exit(1);
	}
	
	else
	{
		cout<<endl<<"Wrong password. Please try again:"<<endl;
	}	
	}

	return 0;
}
