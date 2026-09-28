#include<iostream>
using namespace std;
int main()
{
	int grade;
	
	cout<<"Please Enter your grade: "<<endl;
	cin>>grade;
	
	if(grade>=90)
	{
		cout<<"Exellent!"<<endl;
	}
	
	else if(grade>=75 && grade<=89)
	{
		cout<<"Very good!"<<endl;
	}
	
	else if(grade>=60 && grade<=74)
	{
		cout<<"Not bad."<<endl;
	}
	
	else if(grade<60)
	{
		cout<<"You failed..."<<endl;
	}
	return 0;
}
